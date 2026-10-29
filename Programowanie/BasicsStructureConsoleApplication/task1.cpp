#include <iostream>

//Napisz program, który obliczy odległość punktu 2D
//od środka układu współrzędnych.
void task1()
{
	double x, y;
	std::cout << "Podaj x\n";
	std::cin >> x;

	std::cout << "Podaj y\n";
	std::cin >> y;

	double distance = sqrt(x * x + y * y);

	std::cout << "Odległość to " << distance << "\n";
}