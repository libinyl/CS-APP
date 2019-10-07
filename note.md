# 12 Network Programming

from page 605.

## IP Address

IP 地址是无符号整形.但由于历史原因, IP被描述成了一个结构:

```C
// <netinet/in.h>
/* Internet address structure */
struct in_addr {
    unsigned int s_addr; /* network byte order (big-endian) */
};
```

IP 地址总是**大端序**.

IP 地址通常被描述为人类可读的*点分十进制*表示法.

## Socket 编程

![socket编程](/images/socket.jpg)