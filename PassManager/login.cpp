#include <iostream>
#include "logorcreate.h"
#include "main.h"
#include "auth.h"

void logon(std::string authlevelfirst) {
	clearcache();
	std::string PassInput;
	std::cout << "Enter Your Password = ";
	std::cin >> PassInput;
	loginver(PassInput,authlevelfirst);
}