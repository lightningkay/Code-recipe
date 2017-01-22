#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
    pid_t pid, pid_c;
    pid = fork();
    int status, p =10, c = 5;

    if (pid > 0)
    {
        while (p--) {
            printf("parent\n");
            printf("mypid = %d\n", getpid());
            pid_c = wait(&status);
            printf("pid_c = %d, status = %d\n", pid_c, status);
            sleep(1);
        }
    } else if (pid == 0) {
        while(c--) {
            printf("child\n");
            printf("mypid = %d\n", getpid());
            sleep(1);
        }
    } else {
        perror("fork");
        exit(1);
    }

    return 0;
}
