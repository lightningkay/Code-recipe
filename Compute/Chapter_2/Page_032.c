/*************************************************************************
 > File Name: Page_032.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月20日 星期日 11时02分28秒
 ************************************************************************/

#include<stdio.h>
#define INF 1000000000
int main()
{
    int x, n = 0, kase = 0;
    while(scanf("%d", &n)==1 && n)
    {
        int s = 0, min = INF, max = -INF;
        for(int i = 0; i < n; i++)
        {
        scanf("%d", &x);
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        }
        if(kase)
            printf("\n");
        printf("case%d: %d %d %.3f\n", ++kase, min, max, (double)s/n);
    }
        
    return 0;
}
