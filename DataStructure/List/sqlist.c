/*************************************************************************
 > File Name: sqlist.c
 > Author: 
 > Mail: 
 > Created Time: 2016年08月12日 星期五 23时05分00秒
 ************************************************************************/

#include <stdio.h>
#include "sqlist.h"



int main(int argc, char** argv)
{
    Sqlist L;
    L.length = 10;

    for(int i = 0; i < L.length; i++)
    {
        L.data[i] = i;
    }
    
    for(int i = 0; i < L.length; i++)
        printf("%d", L.data[i]);

    return 0;
}
    
