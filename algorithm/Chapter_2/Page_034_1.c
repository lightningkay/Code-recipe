/*************************************************************************
 > File Name: Page_034_1.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月20日 星期日 11时24分31秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    for(int i = 100; i <1000; i++)
    {
        int a, b, c, temp;
        a = i/100;
        b = i/10%10;
        c = i%10;
        temp = a*a*a + b*b*b + c*c*c;
        if(temp == i)
            printf("%d\n", temp);
    }
    return 0;
}
