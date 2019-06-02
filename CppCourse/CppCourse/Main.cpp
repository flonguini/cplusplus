// <> for compiler files
#include <iostream>
// "" for every thing else, it's relative path "../Log.h" is up one directory
#include "Log.h"

int main() 
{
	int x = 5;
	if (x == 5) 
	{
		InitLog("Initializing Log");
		Log("Hello World");
	}
	else if (x == 6) 
	{
		Log("X is 6");
	}
	else
	{
		Log("Other value");
	}

	std::cin.get();
}