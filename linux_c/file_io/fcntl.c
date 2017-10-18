#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define MSG_TRY "try again\n"

int main(int argc, char **argv)
{
    char buf[32];
    int n;
    int flags;
    flags = fcntl(STDIN_FILENO, F_GETFL);
    flags |= O_NONBLOCK;
    if(fcntl(STDIN_FILENO, F_SETFL, flags) == -1) {
        perror("fcntl");
        exit(1);
    }

tryagin:
    n = read(STDIN_FILENO, buf, sizeof(buf));
    if(n < 0) {
        if(errno != EAGAIN) {
            perror("read stdin");
            exit(1);
        }

        sleep(1);
        write(STDOUT_FILENO, MSG_TRY, strlen(MSG_TRY));
        goto tryagin;
    }

    write(STDOUT_FILENO, buf, n);

    return 0;
}
