#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
    pid_t pid;
    int n = 3;
    while (n--) {
        pid = fork();
        if (pid == 0)
            break;
    }

    if(pid == 0) {
            printf("I'm chaild %d\n", getpid());
            sleep(3);
    } else if (pid > 0) {
        pid_t pid_c;
        while (1) {
            pid_c = waitpid(0, NULL, WNOHANG);
            if(pid_c == -1) {
                perror("waitpid");
                break;
            }
            else
                printf("wait for child %d\n", pid_c);
            sleep(1);
        }
    }

    return 0;
}
