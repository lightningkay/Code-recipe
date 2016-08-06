/*************************************************************************
 > File Name: Page_041.c
 > Author: 
 > Mail: 
 > Created Time: 2016年04月07日 星期四 09时37分40秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define maxn 20
int a[maxn][maxn];
int main()
{
    int n, x, y, tot = 0;
    scanf("%d", &n);
    tot = a[x=0][y=n-1] = 1;
    while(tot < n*n)
    {
        while(x+1 < n && !a[x+1][y]) a[++x][y] = ++tot;
        while(y-1 >= 0 && !a[x][y-1]) a[x][--y] = ++tot;
        while(x-1 >= 0 && !a[x-1][y]) a[--x][y] = ++tot;
        while(y+1 < n && !a[x][y+1]) a[x][++y] = ++tot;
    }
    for(int i = 0; i < n; i++)
    {
        int first = 1;
        for(int j = 0; j < n; j++)
        {
            if(first)
                first = 0;
            else
                printf(" ");
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
