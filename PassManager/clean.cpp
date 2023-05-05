#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

void clearcache() {
	std::ifstream kyah("uenc.dll"); // broken
	if (kyah.good()) {
		clearcacheril();
	}
}

void clearcacheril() {
	//broken
}