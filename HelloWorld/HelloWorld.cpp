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

void printA()
{
	std::cout << "A\n";
}

void printB()
{
	std::cout << "B\n";
}

void printValues(int x, int y)
{
	std::cout << x << '\n';
	std::cout << y << '\n';
}

int add(int x, int y)
{
	return x + y;
}

int multiply(int z, int w)
{
	return z * w;
}

void doSomething()
{
	std::cout << "Hello!\n";
}

void doIt(int x)
{
	int y{ 4 };
	std::cout << "doIt: x = " << x << " y = " << y << '\n';

	x = 3;
	std::cout << "doIt: x = " << x << " y = " << y << '\n';
}

int main()
{
	int x{ 1 };
	int y{ 2 };

	std::cout << "main: x = " << x << " y = " << y << '\n';

	doIt(x);

	std::cout << "main: x = " << x << " y = " << y << '\n';

	return 0;
}