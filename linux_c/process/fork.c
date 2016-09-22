#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char **argv)
{
    int pid;
    pid = fork();
    if (pid == 0) {
        printf("c: child process");
        printf("c: %d\n", getpid());
    } else {
        printf("p: parent process child is %d\n", pid);
        printf("p: %d\n", getpid());
    }

    return 0;
}
