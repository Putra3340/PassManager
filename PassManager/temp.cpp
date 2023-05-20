#include <iostream>
#include <string>
#include <cstring>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Failed to initialize Winsock." << std::endl;
        return 1;
    }

    // FTP server details
    std::string serverIP = "ftp.example.com";
    int serverPort = 21;

    // File to upload
    std::string localFilePath = "file.txt";
    std::string remoteFileName = "uploaded_file.txt";

    // Connect to the FTP server
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in serverAddr {};
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(serverPort);
    inet_pton(AF_INET, serverIP.c_str(), &(serverAddr.sin_addr));
    connect(sockfd, (struct sockaddr*)&serverAddr, sizeof(serverAddr));

    // Read FTP server response
    char response[1024];
    memset(response, 0, sizeof(response));
    read(sockfd, response, sizeof(response));
    std::cout << response;

    // Send FTP commands to login
    std::string username = "ftp_user";
    std::string password = "ftp_password";
    std::string loginCommand = "USER " + username + "\r\n";
    send(sockfd, loginCommand.c_str(), loginCommand.length(), 0);
    memset(response, 0, sizeof(response));
    read(sockfd, response, sizeof(response));
    std::cout << response;
    std::string passwordCommand = "PASS " + password + "\r\n";
    send(sockfd, passwordCommand.c_str(), passwordCommand.length(), 0);
    memset(response, 0, sizeof(response));
    read(sockfd, response, sizeof(response));
    std::cout << response;

    // Send FTP commands to upload file
    std::string uploadCommand = "STOR " + remoteFileName + "\r\n";
    send(sockfd, uploadCommand.c_str(), uploadCommand.length(), 0);
    memset(response, 0, sizeof(response));
    read(sockfd, response, sizeof(response));
    std::cout << response;

    // Open local file for reading
    FILE* file = fopen(localFilePath.c_str(), "rb");
    if (!file) {
        std::cerr << "Failed to open local file." << std::endl;
        close(sockfd);
        return 1;
    }

    // Send file data
    char buffer[1024];
    size_t bytesRead = 0;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        send(sockfd, buffer, bytesRead, 0);
    }
    fclose(file);

    // Close the FTP connection
    close(sockfd);

    std::cout << "File uploaded successfully." << std::endl;

    return 0;
}
