#include <iostream>

int main()
{
	int x{ 5 };
	int y{ 5 };
	std::cout << x << " " << y << "\n";
	std::cout << ++x << " " << --y << "\n";
	std::cout << x << " " << y << "\n";
	std::cout << x++ << " " << y-- << x << "\n";
	std::cout << x << " " << y << "\n";

	bool close;
	std::cin >> close;

	return 0;
}