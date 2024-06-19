#include <winsock2.h>
#include <windows.h>
#include <stdio.h>

int main(){
    WSADATA  wsadata;
    WSAStartup (MAKEWORD(2,2), &wsadata);
    SOCKET s = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = 0;
    addr.sin_port = htons(6969);
    bind(s, &addr, sizeof(addr));
    listen(s, 69);
    SOCKET client = accept(s, 0, 0);
    char request[512] = {0};
    recv(client, request, 512, 0);

    if(memcmp(request,"GET / ", 6) == 0){
        FILE* f = fopen("index.html", "r");
        char buffer[512] = {0};
        fread(buffer, 1, 512, f);
        send(client, buffer, 512, 0);

    }


}
