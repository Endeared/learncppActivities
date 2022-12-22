#include <iostream>

int test()
{
	int y = 0;
	int x = 3;
	double width = 0.0;
	int a = 1;
	int b = 2;
	std::cout << a << std::endl;
	std::cout << "x is equal to: " << x << '\n';
	return 0;
}

int getInput()
{
	int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	std::cout << "You entered " << x << '\n';
	return 0;
}

int getTwoInputs()
{
	std::cout << "Enter two numbers separated by a space: ";
	
	int x{};
	int y{};
	std::cin >> x >> y;
	
	std::cout << "You entered " << x << " and " << y << '\n';
	return 0;
}

int main()
{
	//std::cout << "Hello world!\n";                 // std::cout lives in the iostream library
	//std::cout << "It is very nice to meet you!\n"; // this is much easier to read
	//std::cout << "Yeah!\n";                        // don't you think so?
	getTwoInputs();
	return 0;
}