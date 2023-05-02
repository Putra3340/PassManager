#include <iostream>
#include <string>
#include "auth.h"
#include "logorcreate.h"
#include "main.h"
#include <fstream>

void auth(std::string authlevelfirst) {
    clearcache();
    checkrev1(authlevelfirst);
    std::ifstream ifs("static.dll"); // check if user already set password
    if (ifs.good()) {
        logon(authlevelfirst); //if user already set
    }
    else {
        std::cout << "Looks like you are new User!" << std::endl; //if new user can set pass
        std::cout << "WELCOME!";
        system("timeout /T 3 /NOBREAK>nul");
        loading();
        newpass(authlevelfirst);
    }
}

void checkrev1(std::string authlevelfirst) { //checking user level
    if (authlevelfirst == "yes")
    {
        std::cout << "";
    }
    else
    {
        errlist("111",authlevelfirst);
    }
}

void clear2(std::string authlevelfirst) {
    if (authlevelfirst=="yes")
    {
        std::string authlevelsec = "yes";
    }
}

void loginver(std::string pass,std::string authlevelfirst) {
    deck();
    std::ifstream rawfile("uenc.dll");
    std::string passdata;
    std::getline(rawfile, passdata); // read first line of file into startdata
    rawfile.close(); // close the file
    if (pass==passdata)
    {
        clearcache();
        std::string authlevelsec;
        clear2(authlevelfirst);
        mainpanel(authlevelsec);
    }
    else
    {
        errlist("112",authlevelfirst);
    }
}