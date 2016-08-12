/*************************************************************************
 > File Name: Page_65.c
 > Author: 
 > Mail: 
 > Created Time: 2016年02月26日 星期五 21时17分25秒
 ************************************************************************/

#include<stdio.h>

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 3, b = 4;
    swap(a, b);
    printf("%d %d", a, b);
    return 0;
}
