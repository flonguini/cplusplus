// pre-processor
#include "Log.h"
#include <iostream>

void InitLog(const char* message) {
	Log("Initializing log");
}


void Log(const char* message)
{
	std::cout << message << std::endl;
}
