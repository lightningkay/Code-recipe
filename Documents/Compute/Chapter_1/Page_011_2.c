/*************************************************************************
 > File Name: Page_11_2.c
 > Author: 
 > Mail: 
 > Created Time: 2016年02月25日 星期四 21时22分44秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a, b, c, t;

    scanf("%d%d%d", &a, &b, &c);
    
    if(a > b) {t = a; a = b; b = t;}
    if(a > c) {t = a; a = c; c = t;}
    if(b > c) {t = b; b = c; c = t;}

    printf("%d %d %d", a, b, c);
    return 0;
}
