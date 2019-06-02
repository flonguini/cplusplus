#include <iostream>

// const char* type that can hold strings
void Log(const char* message) {
	std::cout << message << std::endl;
}

int main() {
	Log("Hello World from C++");
	std::cin.get();
}