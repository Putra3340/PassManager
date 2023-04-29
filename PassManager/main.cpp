#include <iostream>
#include <string>
#include <chrono>
#include "auth.h"
#include <thread>
#include "main.h"

using namespace std::chrono_literals;

void printProgressBar(int progress, int total) {
    const int barWidth = 50;

    float progressPercentage = static_cast<float>(progress) / total;
    int barProgress = static_cast<int>(barWidth * progressPercentage);

    std::cout << "[";
    for (int i = 0; i < barWidth; i++) {
        if (i < barProgress) {
            std::cout << "=";
        }
        else if (i == barProgress) {
            std::cout << ">";
        }
        else {
            std::cout << " ";
        }
    }
    std::cout << "] " << static_cast<int>(progressPercentage * 100.0) << " %\r";
    std::cout.flush();
}

int main() {
    const int total = 1000;
    const int step = 100;

    for (int i = 0; i <= total; i += step) {
        printProgressBar(i, total);
        std::this_thread::sleep_for(100ms);
    }

    std::cout << std::endl << "Loading complete!" << std::endl;
    system("cls");
    std::string authlevelfirst = "yes";
    auth(authlevelfirst);
    return 0;
}
