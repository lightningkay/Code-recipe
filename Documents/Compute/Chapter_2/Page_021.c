/*************************************************************************
 > File Name: Page_021.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月14日 星期一 13时39分25秒
 ************************************************************************/

#include<stdio.h>

int main()
{

    for(int x = 1 ; ;x++)
    {
        int n = x * x;

        if(n < 1000)
            continue;
        if(n > 9999)
            break;
        int hi = n / 100;
        int lo= n % 100;
        if(hi / 10 == hi % 10 && lo / 10 == lo % 10)
            printf("%d\n", n);
    }

    return 0;
}
