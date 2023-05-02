#include <iostream>
#include <string>
#include "main.h"
#include <fstream>

void deck() {
	const char* decprot = "dex.dll";
	const char* decrisk = "dec.exe";
	std::rename(decprot, decrisk);
	system(decrisk);
	std::rename(decrisk, decprot);
}