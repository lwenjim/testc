#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
int main(void)
{
    // 创建Socket描述符
    int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    
    // 向服务器端发起连接请求
    struct sockaddr_in serv_addr;
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv_addr.sin_port = htons(12345);
    connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
    
    // 接收服务器端的数据
    char buf[1024];
    read(sock, buf, sizeof(buf) - 1);
    printf("Message from server: %s\n", buf);
    
    // 关闭Socket
    close(sock);
    return 0;
}
