#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int in = STDIN_FILENO;
    int out = STDOUT_FILENO;
    int err = STDERR_FILENO;
    printf("in = %d, out = %d, err = %d\n", in, out, err);

    return 0;
}

