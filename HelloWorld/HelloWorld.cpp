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

void doB()
{
	std::cout << "In doB()\n";
}


void doA()
{
	std::cout << "Starting doA()\n";

	doB();

	std::cout << "Ending doA()\n";
}

void foo()
{
	std::cout << "foo!\n";
}

int returnFive()
{
	return 5;
}

int getValueFromUserUB()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printHi()
{
	std::cout << "Hi" << '\n';

}

void returnNothing()
{
}

int main()
{
	// When calling a function by itself, no value is required
	returnNothing(); // ok: we can call a function that does not return a value
	returnFive();    // ok: we can call a function that returns a value, and ignore that return value

	// When calling a function in a context that requires a value (like std::cout)
	std::cout << returnFive();    // ok: we can call a function that returns a value, and the value will be used

	return 0;
}