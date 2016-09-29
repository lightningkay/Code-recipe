#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main(int argc, char **argv)
{
    alarm(1);
    for(int i = 0; ;i++)
        printf("%d ", i);
    return 0;
}
