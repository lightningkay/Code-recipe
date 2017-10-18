#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define TTY "/dev/tty"
#define MSG_TRY "try again\n"
#define MSG_TIMEOUT "time out\n"

int main(int argc, char **argv)
{
    char buf[10];
    int fd, i, n;
    fd = open(TTY, O_RDONLY | O_NONBLOCK);

    if(fd < 0) {
        perror("tty error");
        exit(1);
    }

    for(i = 0; i < 5; ++i) {
        n = read(fd, buf, sizeof(buf));

        if( n >= 0 )
            break;
        if( errno != EAGAIN ) {
            perror("read /dev/tty");
            exit(1);
        }
        sleep(1);
        write(STDOUT_FILENO, MSG_TRY, strlen(MSG_TRY));
    }


    if( i == 5 )
        write(STDOUT_FILENO, MSG_TIMEOUT, strlen(MSG_TIMEOUT));
    else
        write(STDOUT_FILENO, buf, n);
    close(fd);

    return 0;
}





