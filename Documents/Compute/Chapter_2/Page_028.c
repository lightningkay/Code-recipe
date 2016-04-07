/*************************************************************************
 > File Name: Page_028.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月20日 星期日 09时42分15秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int x, n = 0, min, max, s = 0;
    printf("%d %d\n", min, max);
    while(scanf("%d", &x)==1)
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    printf("%d %d %.3f\n", min, max, (double)s/n);
    return 0;
}
