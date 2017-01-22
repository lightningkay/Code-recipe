#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char const* argv[])
{
    struct stat s_buf;

    if (argc < 2) {
        printf("arg error");
        exit(1);
    }

    if(stat(argv[1], &s_buf) < 0) {
        perror("stat");
        exit(1);
    }

    printf("%s\t%ld\n", argv[1], s_buf.st_size);

    return 0;
}
