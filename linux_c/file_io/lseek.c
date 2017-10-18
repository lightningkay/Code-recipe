#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char **argv)
{
    int fd, n;
    fd = open("abc", O_RDWR);
    if(fd < 0) {
        perror("open abc");
        exit(1);
    }

    n = lseek(fd, 0, SEEK_END);
    printf("file size is %d\n", n);
    close(fd);

    return 0;
}
