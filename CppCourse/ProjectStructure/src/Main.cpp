#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{

	int var = 8;

	// the memory address of var
	int* ptr = &var; 
	
	*ptr = 10;

	LOG(var);

	// Alocate 8 bits
	char* buffer = new char[8];
	memset(buffer, 0, 8);

	delete[] buffer;

	char** prt2 = &buffer;
	
	std::cin.get();
}