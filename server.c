#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
int main(int argc, char** argv)
{
    // 创建Socket描述符
    int serv_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    // 将Socket与IP地址和端口号绑定
    struct sockaddr_in serv_addr;
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(12345);
    
    int i = bind(serv_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

    // 进入监听状态
    listen(serv_sock, 5);

    // 接受客户端的连接请求
    struct sockaddr_in clnt_addr;
    socklen_t clnt_addr_size = sizeof(clnt_addr);
    int clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr, &clnt_addr_size);

    // 向客户端发送数据
    char str[] = "Hello World!";
    write(clnt_sock, str, sizeof(str));

    // 关闭Socket
    close(clnt_sock);
    close(serv_sock);
    return 0;
}
