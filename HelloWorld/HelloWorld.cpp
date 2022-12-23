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

int print() // note: return type of int
{
	std::cout << "A";

	return 5; // the function will return to the caller here

	std::cout << "B"; // this will never be printed
}

int main()
{
	std::cout << print(); // print() returns value 5, which will be print to the console

	return 0;
}