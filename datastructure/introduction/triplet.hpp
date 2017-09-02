#include <stdlib.h>

#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int ElemType;
typedef ElemType *Triplet;

constexpr int TripletSize = 3;

bool InitTriplet(Triplet &T, ElemType v1, ElemType v2, ElemType v3)
{
    if(!(T = (ElemType *)malloc(3 * sizeof(ElemType))))
        exit(OVERFLOW);
    T[0] = v1, T[1] = v2, T[2] = v3;
    return true;
}

bool DestroyTriplet(Triplet &T)
{
    free(T);
    T = NULL;
    return true;
}

bool Get(Triplet T, int i, ElemType &e)
{
    if(i < 1 || i > 3)
        return ERROR;
    e = T[i - 1];
    return true;
}

bool Put(Triplet T, int i, ElemType &e)
{
    if(i < 1 || i > 3)
        return ERROR;
    T[i - 1] = e;
    return true;
}

bool IsAscendin(Triplet T)
{
    return (T[0] < T[1] && T[1] < T[2]);
}

bool IsDescendin(Triplet T)
{
    return (T[0] > T[1] && T[1] > T[2]);
}

bool Max(Triplet T, ElemType &e)
{
    e = (T[0] >= T[1]) ? ((T[0] >= T[2]) ? T[0] : T[2]) : ((T[1] >= T[2]) ? T[1] : T[2]);
    return true;
}

bool Min(Triplet T, ElemType &e)
{
    e = (T[0] <= T[1]) ? ((T[0] <= T[2]) ? T[0] : T[2]) : ((T[1] <= T[2]) ? T[1] : T[2]);
    return true;
}
