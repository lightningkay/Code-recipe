/*************************************************************************
 > File Name: Page_030.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月20日 星期日 09时58分40秒
 ************************************************************************/

#define LOCAL
#include<stdio.h>
#define INF 100000000

int main()
{
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    int x, n = 0, min = INF, max = -INF, s = 0;
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
