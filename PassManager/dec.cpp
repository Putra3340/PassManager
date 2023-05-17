#include <iostream>
#include <string>
#include "main.h"
#include <fstream>

void deck() {
	const char* decprot = "deasm.dll";
	const char* decrisk = "deasm.exe";
	std::rename(decprot, decrisk);
	system(decrisk);
	std::rename(decrisk, decprot);
}