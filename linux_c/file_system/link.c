#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if(link("access.c", "aa.c") != 0)
    {
        perror("link");
        exit(1);
    }
}
