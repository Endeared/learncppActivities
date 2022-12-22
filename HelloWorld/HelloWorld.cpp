#include <iostream>

int test()
{
	int y = 0;
	int x = 3;
	double width = 0.0;
	int a = 1;
	int b = 2;
	std::cout << a << std::endl;
	std::cout << "x is equal to: " << x;
	return 0;
}

int main()
{
	std::cout << "Hello world!\n";                 // std::cout lives in the iostream library
	std::cout << "It is very nice to meet you!\n"; // this is much easier to read
	std::cout << "Yeah!\n";                        // don't you think so?
	test();
	return 0;
}