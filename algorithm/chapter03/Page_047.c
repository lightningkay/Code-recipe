/*************************************************************************
 > File Name: Page_047.c
 > Author: 
 > Mail: 
 > Created Time: 2016年04月10日 星期日 09时57分12秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int c, q = 1;
    while((c = getchar())!= EOF)
    {
        if(c == '"')
        {
            printf("%s", q?"“":"”");
            q = !q;
        }
        else
            printf("%c", c);
    }

    return 0;
}
