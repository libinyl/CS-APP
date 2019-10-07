#include "../include/csapp.h"

int main(int argc,char* args[])
{
    int clientfd;
    char *host, *port, buf[MAXLINE];
    rio_t rio;

    if(argc!=3)
    {
        fprintf(stderr,"usage:%s <host> <port>\n",args[0]);
        exit(0);
    }
    host = args[1];
    port = args[2];

    clientfd = Open_clientfd(host,port);


}
