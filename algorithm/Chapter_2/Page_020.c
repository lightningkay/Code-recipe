/*************************************************************************
 > File Name: Page_020.c
 > Author: 
 > Mail: 
 > Created Time: 2016年03月11日 星期五 18时51分03秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>

int main()
{
    int num;
    for(int a = 1; a<=9; a++){
        for(int b = 0; b<=9; b++){
             num =a*1100+b*11;
             int m = floor(sqrt(num) + 0.5);
             if(m*m==num){
                 printf("%d\n", num);
             }
        }
    }
    
    return 0;
}

