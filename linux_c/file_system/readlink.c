#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char buf[10];
    int len = 0;

    if((len = readlink("abc", buf, sizeof(buf))) < 0)
    {
        perror("readlink");
        exit(1);
    }

    write(STDOUT_FILENO, buf, len);
}
