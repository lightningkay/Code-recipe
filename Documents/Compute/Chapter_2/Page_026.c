/*************************************************************************
 > File Name: Page_026.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月16日 星期三 19时09分56秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>

int main()
{
    const int MOD = 1000000;
    int n, S = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++ )
    {
        int factorial = 1;
        for(int j = 1; j <= i; j++)
        {
            factorial = factorial * j % MOD;
        }
        S = (factorial + S) % MOD;
    }
    
    printf("%d\n", S);
    printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);
}
