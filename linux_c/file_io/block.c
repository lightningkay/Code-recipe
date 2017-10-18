#include <stdio.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char buf[1024];
    int len = 0;
    len = read(STDIN_FILENO, buf, sizeof(buf));
    write(STDOUT_FILENO, buf, len);
    return 0;
}
