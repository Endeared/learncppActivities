#include <iostream>

int doubleNumber()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;
	std::cout << "Double " << x << " is: " << x * 2 << '\n';
	std::cout << "Triple " << x << " is: " << x * 3;
	return 0;
}

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

void doPrint()
{
	std::cout << "In doPrint()\n";
}

int main()
{
	//std::cout << "Hello world!\n";                 // std::cout lives in the iostream library
	//std::cout << "It is very nice to meet you!\n"; // this is much easier to read
	//std::cout << "Yeah!\n";                        // don't you think so?
	std::cout << "Starting main()\n";
	doPrint(); // doPrint() called for the first time
	doPrint(); // doPrint() called for the second time
	std::cout << "Ending main()\n";

	return 0;
}