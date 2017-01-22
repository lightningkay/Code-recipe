#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(int argc, char const* argv[])
{
    int mode;
    if (argc < 3) {
        printf("mode filename\n");
    }

    mode = atoi(argv[1]);
    chmod(argv[2], mode);
    return 0;
}
