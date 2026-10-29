#include <iostream>

//Napisz program, który obliczy odległość punktu 2D
//od środka układu współrzędnych.

struct point
{
	std::string description;
	double x, y;
	bool active;
};

void getPointValue(double &x, double &y)
{
	std::cout << "Podaj x\n";
	std::cin >> x;

	std::cout << "Podaj y\n";
	std::cin >> y;
}

void getPointValue(point &p)
{
	std::cout << "Podaj x\n";
	std::cin >> p.x;

	std::cout << "Podaj y\n";
	std::cin >> p.y;
}

void task2()
{
	//std::string description;
	//double x, y;

	//std::string description1;
	//double x0, y0;
	//double x1, y1;
	//double x2, y2;
	//double x[1000], y[1000];

	point firstPoint;
	//firstPoint.x = 20;
	//firstPoint.y = 187;

	//getPointValue(firstPoint.x, firstPoint.y);
	getPointValue(firstPoint);

	double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

	std::cout << "Odległość to " << distance << "\n";

	point secondPoint;
	secondPoint.x = 19;
}