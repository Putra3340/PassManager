#include <iostream>
#include <string>
#include "logorcreate.h"
#include "main.h"
#include "auth.h"
#include <fstream>
using namespace std;

void newpass(std::string authlevelfirst) {
    checkrev1(authlevelfirst);
    clearcache();
    string Newpass;

    // ask for user input
    cout << "You need a password to use this." << endl;
    cout << "Set up Your New Password = ";
    getline(cin, Newpass);

    // open a file for writing
    ofstream outputFile("uenc.dll");

    // write user input to the file
    outputFile << Newpass << endl;

    // close the file
    outputFile.close();

    // confirm to the user that the operation was successful
    cout << "Password Saved!" << endl;
    system("timeout /T 2 /NOBREAK>nul");
    loading();
    string authlevelsec;
    encry();
    clear2(authlevelfirst);
    clearcache();
    mainpanel(authlevelsec);
    
}