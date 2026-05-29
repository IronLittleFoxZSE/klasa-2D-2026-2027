
#include <iostream>

/*
Funkcja
	- zbiór instrukcji realizujący zadanie
	- podprogram

Budowa funkcji:
	* nagłówek
	* ciało funkcji - instrukcje ograniczone nawiasami klamrowymi

*/

/*
void showMessage()
{
	std::cout << "Podaj liczbę całkowitą:\n";
}

void showMessage2()
{
	std::cout << "Podaj dzielnik:\n";
}

void showMessage3()
{
	std::cout << "Podaj dzielną:\n";
}
*/

void showMessage(std::string message)
{
	std::cout << message << "\n";
}


void task1()
{
	int number;
	//std::cout << "Podaj liczbę całkowitą:\n";
	showMessage("Podaj liczbę całkowitą:");
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";
}

void task2()
{
	int number;
	//std::cout << "Podaj liczbę całkowitą:\n";
	showMessage("Podaj liczbę całkowitą:");
	std::cin >> number;

	int reminderOfDivision;
	reminderOfDivision = number % 2;

	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";
}


void task4()
{
	int dividend, divisor;
	//std::cout << "Podaj dzielnik:\n";
	showMessage("Podaj dzielnik:");
	std::cin >> dividend;
	//std::cout << "Podaj dzielną:\n";
	showMessage("Podaj dzielną:");
	std::cin >> divisor;
}


//----------------------------------------------------------------------------------------------
//Napisz funcję uniwersalną, która wyświetli imię oraz informację czy ktoś
//jest pełnoletni czy nie.
void task5(std::string n, int a)
{
	if (a >= 18)
		std::cout << n << " jest pełnoletni\n";
	else
		std::cout << n << " nie jest pełnoletni\n";
}

int main()
{
	//instrukcje
	//task2();
	//task4();
	//instrukcje

	std::string name;
	int age;

	name = "Jan";
	age = 7;
	task5(name, age);

	name = "Batek";
	task5(name, 19);
}
