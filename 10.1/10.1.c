#include "../include/csapp.h"


int main(int argc, char *args[])
{
    int fd1, fd2;

    fd1 = open("/etc", O_RDONLY, 0);
    printf("%d",fd1);
    close(fd1);

    printf("%d",fd1);

    fd2 = open("/etc",O_RDONLY,0);
    printf("%d",fd2);
    printf("%d",fd2);
    close(fd2);
    printf("%d",fd2);
}
