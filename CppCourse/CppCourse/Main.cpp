#include <iostream>
#include "Log.h"

int main() 
{
	InitLog("Initializing Log");
	Log("Hello World");
	std::cin.get();
}