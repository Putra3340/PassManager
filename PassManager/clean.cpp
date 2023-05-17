#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include "main.h"

void clearcache() {
	std::ifstream kyah("uenc.dll"); // broken
	if (kyah.good()) {
		kyah.close();
		clearcacheril("uenc.dll");
	}
}

void clearcacheril(const char* cachename) {
	std::remove(cachename);
}