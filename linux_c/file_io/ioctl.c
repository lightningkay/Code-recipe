#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int fd;
    struct winsize size;
    if(isatty(STDOUT_FILENO) == 0)
        exit(1);
    if(ioctl(STDOUT_FILENO, TIOCGWINSZ, &size) < 0) {
        perror("ioctl winsize");
        exit(1);
    }
    printf("%d row, %d columns\n", size.ws_row, size.ws_col);

    return 0;
}
