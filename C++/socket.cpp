#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>   // for gethostbyname
#include <unistd.h>  // for read and close

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        std::cerr << "Error opening socket" << std::endl;
        return 1;
    }

    struct hostent* server = gethostbyname("www.google.com");
    if (!server) {
        std::cerr << "Error, no such host" << std::endl;
        return 2;
    }

    struct sockaddr_in serv_addr;
    std::memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    std::memcpy(&serv_addr.sin_addr.s_addr, server->h_addr, server->h_length);
    serv_addr.sin_port = htons(80); // HTTP port

    if (connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
        std::cerr << "Error connecting" << std::endl;
        return 3;
    }

    std::string request = 
        "GET /search?q=Hello+World HTTP/1.1\r\n"
        "Host: www.google.com\r\n"
        "User-Agent: Mozilla/5.0\r\n" // Simulate a browser request
        "Connection: close\r\n\r\n";  // Important to close the connection after the request

    if (send(sock, request.c_str(), request.length(), 0) < 0) {
        std::cerr << "Error sending request" << std::endl;
        return 4;
    }

    char buffer[4096];
    while (true) {
        int bytes = read(sock, buffer, sizeof(buffer) - 1);
        if (bytes < 0) {
            std::cerr << "Error reading from socket" << std::endl;
            return 5;
        }
        if (bytes == 0) // No more data
            break;
        buffer[bytes] = '\0';
        std::cout << buffer;
    }

    close(sock);
    return 0;
}
