#include <iostream>

int main()
{

	for (int i = 1; i < 20; i++)
	{
		//if (i % 2 == 0)
		//	continue; // go to next iteration

		if (i % 5 == 0)
			break; // stop the iteration
		
		std::cout << "Hello World ";
		std::cout << i << std::endl;

	}

}