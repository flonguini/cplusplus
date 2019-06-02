#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int& value)
{
	value++;
}

int main()
{

	int var = 8;
	Increment(var);
	// reference to var address
	int& ref = var;

	LOG(ref);
	
	std::cin.get();
}