#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    pid_t pid;
    pid = fork();

    if (pid == 0) {
        execl("/usr/bin/firefox", "firefox", "www.baidu.com", NULL);
    } else if (pid > 0) {
        printf("parent\n");
    } else {
        perror("fork");
        exit(1);
    }

    return 0;
}
