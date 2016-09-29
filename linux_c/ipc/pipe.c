#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    pid_t pid;
    int fd[2];
    char buf[1024] = "hello world";
    if (pipe(fd) < 0)
    {
        perror("pipe");
        exit(1);
    }

    pid = fork();

    if (pid > 0) {
        close(fd[0]);
        write(fd[1], buf, strlen(buf));
        printf("finish\n");
        wait(NULL);
    } else if (pid == 0) {
        int len;
        close(fd[1]);
        sleep(3);
        len = read(fd[0], buf, sizeof(buf));
        write(STDOUT_FILENO, buf, len);
    } else {
        perror("fork");
        exit(1);
    }

    return 0;

}

