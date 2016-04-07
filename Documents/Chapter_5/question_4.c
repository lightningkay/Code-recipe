/*
 * fibonacci : use function to implenment
 */

#include <stdio.h>

int Fibo(int n);

void main()
{
    for (int i = 0; i < 16; i ++)
    {
        printf("%d \n", Fibo(i));
    }
}

int Fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else 
        return (Fibo(n-1) + Fibo(n-2));
}
