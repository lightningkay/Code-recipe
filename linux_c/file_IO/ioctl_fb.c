#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <linux/fb.h>

int main(int argc, char **argv)
{
    struct fb_var_screeninfo fb_info;
    int fd;
    fd = open("/dev/fb0", O_RDONLY);
    if (fd < 0) {
        perror("open dev/fbo");
        exit(1);
    }
    if(ioctl(fd, FBIOGET_VSCREENINFO, &fb_info) < 0) {
        perror("ioctl winsize");
        exit(1);
    }
    printf("%d *  %d \n", fb_info.xres, fb_info.yres);

    close(fd);

    return 0;
}
