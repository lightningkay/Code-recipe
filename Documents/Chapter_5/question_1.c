/* * this program will display the constant of gold ratio.  */


#include <stdio.h>
#include <math.h>

double GoldRatio();

void main()
{
    printf("%.6f \n", GoldRatio());
}

double GoldRatio()
{
    return (1 + sqrt(5))/2;
}
