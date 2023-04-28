#include <iostream>
#include <string>
#include "auth.h"
#include "logorcreate.h"
#include <fstream>

void auth(std::string authlevelfirst) {
    std::ifstream ifs("pass.pwd"); // check if user already set password
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