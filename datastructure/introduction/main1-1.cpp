#include "triplet.hpp"
#include <iostream>

int main()
{
    Triplet T;
    InitTriplet(T, 5, 6, 7);
    for (int i = 0; i < TripletSize; ++i )
    {
        std::cout << T[i] << std::endl;
    }
    DestroyTriplet(T);

    return 0;
}
