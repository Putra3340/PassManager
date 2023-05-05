#include <iostream>
#include <string>
#include <chrono>
#include "auth.h"
#include "main.h"
#include <thread>
using namespace std::chrono_literals;

void loading() {
    const int total = 1000;
    const int step = 100;

    for (int i = 0; i <= total; i += step) {
        printProgressBar(i, total);
        std::this_thread::sleep_for(100ms);
    }

    std::cout << std::endl << "Loading complete!" << std::endl;
    system("cls");
}

void line() {
    std::cout << "========================================================================================================================" << std::endl;
}

void clearconsole() {
    system("cls");
}