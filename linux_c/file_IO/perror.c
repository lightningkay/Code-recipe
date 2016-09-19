#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv)
{
    int fd = open("abc", O_WRONLY);

    if(fd < 0)
    {
        printf("error = %d\n",errno);
        printf("%s", strerror(errno));
        perror("open abc");
        exit(1);
    }
    return 0;
}
