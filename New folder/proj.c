Files :

server.c

client.c

Haiku msg : ( source internet )

Birds fly through the wind

The wind blows through the blue sky

Winds of change grow close

Explanation:

server.c

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/socket.h>

#include <netinet/in.h>

// Here we've defined the PORT

#define PORT 5755

// This a out haiku_msg

const char haiku_msg[] = "Birds fly through the wind\nThe wind blows through the blue sky\nWinds of change grow close";

int main()

{

int server_fd, new_socket;

struct sockaddr_in address;

int addrlen = sizeof(address);

// Creating socket file descriptor

if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {

perror("socket failed");

exit(EXIT_FAILURE);

}

address.sin_family = AF_INET;

address.sin_addr.s_addr = INADDR_ANY;

address.sin_port = htons(PORT);

if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {

perror("bind failed");

exit(EXIT_FAILURE);

}

printf("haiku server started...\n\n");

if (listen(server_fd, 5) < 0) {

perror("listen");

exit(EXIT_FAILURE);

}

if ((new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen)) < 0) {

perror("accept");

exit(EXIT_FAILURE);

}

printf("\nClient connected to haiku server.\nsending msg.\n");

send(new_socket, haiku_msg, strlen(haiku_msg), 0);

printf("haiku sent to client.\n\n");

return 0;

}

client.c

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <arpa/inet.h>

#include <sys/socket.h>

#include <netinet/in.h>

// Here we have defined the PORT

#define PORT 5755

int main()

{

char buffer[1024] = "";

struct sockaddr_in address;

struct sockaddr_in serv_addr;

int sock = 0;

if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)

{

printf("\n Socket creation error \n");

return -1;

}

memset(&serv_addr, '0', sizeof(serv_addr));

serv_addr.sin_family = AF_INET;

serv_addr.sin_port = htons(PORT);

// Convert IPv4 and IPv6 addresses from text to binary form

if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)

{

printf("\nInvalid address/ Address not supported \n");

return -1;

}

if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)

{

printf("\nConnection Failed \n");

return -1;

}

read( sock , buffer, 1024);

printf("\nMessage from server : \n%s\n\n",buffer );

return 0;

}