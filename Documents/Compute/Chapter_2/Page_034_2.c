/*************************************************************************
 > File Name: Page_034_2.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月20日 星期日 11时37分47秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a, b, c, kase = 0;
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
    while(scanf("%d%d%d", &a, &b, &c)==3) 
    {
        if(a >= 3 || b >=5 || c >= 7)
        {
            ++kase;
            break;
        }
        for(int i = 10; i <= 100; i++)
        {
            if(i % 3 == a && i % 5 == b && i % 7 == c)
            {
                ++kase;
                printf("Case %d: %d\n", kase, i);
                break;
            }
            else if(i == 100)
            {
                ++kase;
                printf("Case %d: No Answer!\n", kase);
            }
        } 
         
     
    }
       return 0;
}
