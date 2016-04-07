/*
 * this program is used to compute the result of ax^2 + bx + c = 0;
 */

#include <stdio.h>
#include <math.h>

void Result(double a, double b, double c);
double Juge(double a, double b, double c);

void main()
{
    double a, b, c;

    printf("Enter coefficient for the quadratic equation\n");
    printf("a?");
    scanf("%lf", &a);
    printf("b?");
    scanf("%lf", &b);
    printf("c?");
    scanf("%lf", &c);

    Result(a, b, c);
}

void Result(double a, double b, double c)
{
    double det;
    det = Juge(a,b,c);

    if (det < 0)
        printf("This equation is no results");
    else
    {
        det = sqrt(det);
        printf("The first solution is %lf \n", (-b + det)/(2*a));
        printf("The second solution is %lf \n", (-b - det)/(2*a));
    }
}

double Juge(double a, double b, double c)
{
    return (b*b - 4*a*c);
}
