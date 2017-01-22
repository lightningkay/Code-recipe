#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char **argv)
{
    printf("hello\n");
    // /bin/ls
    if(execl("/bin/ls", "ls", "-l", NULL) == -1) {
        perror("exec");
        exit(1);
    }
    printf("world\n");
    return 0;

}
