#include <iostream>
#include <string>
#include "logorcreate.h"
#include <fstream>
using namespace std;

void newpass(std::string authlevel) {
    string userInput;

    // ask for user input
    cout << "You need a password to use this." << endl;
    cout << "Set up Your New Password = ";
    getline(cin, userInput);

    // open a file for writing
    ofstream outputFile("uenc.dll");

    // write user input to the file
    outputFile << userInput << endl;

    // close the file
    outputFile.close();

    // confirm to the user that the operation was successful
    cout << "Input written to file!" << endl;
}