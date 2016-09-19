#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#define SIZE 8192

int main(int argc, char **argv)
{
    char buf[SIZE];
    int fd_src, fd_dest;
    if(argc < 3)
    {
        printf("argu error!\n");
        exit(1);
    }

    fd_src = open(argv[1], O_RDONLY);
    fd_dest = open(argv[2], O_CREAT|O_WRONLY, 0777);
    int len = 0;
    if(len = read(fd_src, buf, SIZE))
        write(fd_dest, buf, len);

    close(fd_src);
    close(fd_dest);
    return 0;
}
