#include <iostream>
#include <string>
#include "logorcreate.h"

int errlist(std::string err,std::string authlevelfirst) {
	if (err=="112")
	{
		std::cout << std::endl << "Password Wrong!"<<std::endl;
		logon(authlevelfirst);

	}
	return 0;
}