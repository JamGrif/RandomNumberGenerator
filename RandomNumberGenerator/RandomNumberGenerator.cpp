#include <iostream>
#include <ctime>

int RandomNumber(int min, int max)
{
	srand(time(0));
	int Range = (max - min) + 1;
	return min + rand() % Range;
}

int main()
{
	int x = 43;
	int y = 546;
	int Result = 0; //= RandomNumber(x, y); //Gets a random number between x and y
	std::cout << Result << " is the chosen random number." << std::endl;
}

