#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>

/**
 * convert a hex-formed ip address into a dotted-decimal string.
 *
 *
 *
 * > ./hex2dd 0x8002c2f2
 * 128.2.194.242


 * @param argc
 * @param args
 * @return
 */
int main(int argc, char *args[])
{
    if (argc != 2) {
        printf("error: invalid input.\nusage: hex2dd [ip]\n");
        exit(0);
    }

    char *input = args[1];

    if (strlen(input) < 3) {
        printf("error: not a valid hex ip.\n");
        exit(0);
    }

    if (input[0] != '0' || (input[1] != 'x' && input[1] != 'X')) {
        printf("error: not a valid hex ip.\n");
        exit(0);
    }

    // 把十六进制字符串转换为十进制数值,并转化为network byte order
    unsigned int ip_v = strtol(args[1], NULL, 16);

    struct in_addr ip_addr = {htonl(ip_v)};

    printf("%s\n", inet_ntoa(ip_addr));
}
