/*************************************************************************
 > File Name: Page_022.c(bug exist beyond the max of integer in the computer  987654321 the answer equals 1 it's wrong
 )
 > Author: 
 > Mail: 
 > Created Time: 2016年03月14日 星期一 14时10分28秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n, count = 0;

    scanf("%d", &n);

    while (n > 1){
        if(n % 2 == 1)
            n = 3 * n + 1;
        else
            n = n / 2;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
