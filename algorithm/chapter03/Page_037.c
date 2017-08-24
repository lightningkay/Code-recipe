/*************************************************************************
 > File Name: Page_037.c
 > Author: 
 > Mail: 
 > Created Time: 2016年04月06日 星期三 21时11分03秒
 ************************************************************************/

#include<stdio.h>
#define maxn 100
int a[maxn];
int main()
{
    int x, n = 0;
   
    while(scanf("%d", &x)==1)
        a[n++] = x;
    for(int i = n-1; i >= 1; i--)
        printf("%d ", a[i]);
    printf("%d\n", a[0]);

    return 0;
}
