#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

#define TEST "test\n"
int main(int argc, char **argv)
{
    char buf[10];
    int fd, len = 0;

    printf("open\n");
    fd = open("temp", O_CREAT | O_RDWR, 0777);
    if(unlink("temp") != 0)
    {
        perror("unlink");
        exit(1);
    }
    if (fd < 0)
    {
        perror("open");
        exit(1);
    }

    printf("write\n");
    if(write(fd, TEST, strlen(TEST)) < 0)
    {
        perror("write");
        exit(1);
    }

    if(lseek(fd, 0, SEEK_SET) != 0)
    {
        perror("lseek");
        exit(1);
    }

    printf("read\n");
    if((len = read(fd, buf, sizeof(buf))) < 0)
    {
        perror("read");
        exit(1);
    }

    printf("len = %d", len);
    printf("write\n");


    if(write(STDOUT_FILENO, buf, len) < 0)
    {
        perror("write");
        exit(1);
    }

    close(fd);
    return 0;
}
