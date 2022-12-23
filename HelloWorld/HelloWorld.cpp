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

void foo() // no longer inside of main()
{
	std::cout << "foo!\n";
}

int returnFive()
{
	// the return statement indicates the specific value that will be returned
	return 5; // return the specific value 5 back to the caller
}

int getValueFromUserUB() // this function returns an integer value
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	// note: no return statement
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

	// This function does not return a value so no return statement is needed
}

int main()
{
	printHi(); // okay: function printHi() is called, no value is returned

	return 0;
}