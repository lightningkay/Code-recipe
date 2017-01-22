/*************************************************************************
 > File Name: Page_024.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月14日 星期一 14时21分43秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    double sum = 0;
    
    for(int i = 0; ; i++ )
    {
        double a = 1.0 / (2 * i + 1);
        if(i % 2 == 0)
            sum = sum + a;
        else 
            sum = sum - a;
        if(a< 0.000001)
            break;
    }

    printf("%.6f", sum);
    return 0;
}

