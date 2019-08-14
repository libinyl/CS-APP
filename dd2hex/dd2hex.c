#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>

/*
    unix> ./dd2hex 128.2.194.242
    0x8002c2f2
*/
int main(int argc, char *args[])
{
    if (argc != 2) {
        printf("usage: dd2hex [hex-ip]\n");
        exit(0);
    }

    char *input = args[1];

    struct in_addr ip_out;
    if (!inet_aton(input, &ip_out)) {
        printf("error: not a valid input\n");
        exit(0);
    }
    // 注意字节序转换
    printf("%#x\n", ntohl(ip_out.s_addr));
}
