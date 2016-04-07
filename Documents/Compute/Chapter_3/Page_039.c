/*************************************************************************
 > File Name: Page_039.c
 > Author: 
 > Mail: 
 > Created Time: 2016年04月06日 星期三 21时24分30秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define maxn 1010
int a[maxn];
int main()
{
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    scanf("%d%d", &n, &k);
    for(int i = 1; i <= k; i++)
    {
        int j = 0;
         while(j<n)
         {
             if((j+1)%i == 0)
                 a[j] = !a[j];
             j++;
         }
    }
    for(int i = 0; i <= n-1; i++)
    {
        if(a[i]!=0)
        {
            if(first)
                first = 0;
            else
                printf(" ");
            printf("%d", i+1);
        }
    }    
    printf("\n");
    return 0;
}
