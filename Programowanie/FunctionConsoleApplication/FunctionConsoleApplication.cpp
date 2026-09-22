
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
void printAdultStatus(std::string n, int a)
{
	if (a >= 18)
		std::cout << n << " jest pełnoletni\n";
	else
		std::cout << n << " nie jest pełnoletni\n";
}

void task5()
{
	std::string name;
	int age;

	name = "Jan";
	age = 7;
	printAdultStatus(name, age);

	name = "Batek";
	printAdultStatus(name, 19);
}

//----------------------------------------------------------------------

//przekazanie parametru przez wartość
void passByValue(int n)
{
	std::cout << "Zmienna number w funkcji x: " << n << "\n";
	n--;
	std::cout << "Zmienna number w funkcji x: " << n << "\n";
}

//przekazanie parametru przez referencję
void passByReference(int& n)
{
	std::cout << "Zmienna number w funkcji y: " << n << "\n";
	n--;
	std::cout << "Zmienna number w funkcji y: " << n << "\n";
}

void task6()
{
	int number = 7;

	std::cout << "Zmienna number w funkcji task6: " << number << "\n";
	passByValue(number);
	std::cout << "Zmienna number w funkcji task6: " << number << "\n";

	number = 8;
	std::cout << "Zmienna number w funkcji task6: " << number << "\n";
	passByReference(number);
	std::cout << "Zmienna number w funkcji task6: " << number << "\n";

}

//----------------------------------

//Przeciążenie nazwy funkcji (przeciążenie funkcji) - w tej samej widoczności istnieją dwie 
// lub więcej funkcji o tej samej nazwie ale różniącej się ilością i/lub typem parametrów.
//Kompilator na podstawie wywołania funkcji eliminuje definicje. Na końcu eliminacji ma zostać
// jedna funkcja. Jesli zostanie więcej funkcji lub żadna to kompilator zgłosi bład.

void addTwoNumbers(int firstNumber, int secondNumber, int& result)
{
	//int result;
	result = firstNumber + secondNumber;
}

int addTwoNumbers(int firstNumber, int secondNumber)
{
	int result;
	result = firstNumber + secondNumber;

	return result;
}


void task7()
{
	int a = 5, b = 8;

	int sum;
	
	
	//sum = a + b;
	addTwoNumbers(a, b, sum);
	sum = addTwoNumbers(a, b);
	if (addTwoNumbers(a, b) > 15)
	{

	}

	std::cout << sum;

	//.....

	int c = 4;
	int d = 9;

	int secondSum;

	
	//secondSum = c + d;
	addTwoNumbers(c, d, secondSum);
	secondSum = addTwoNumbers(c, d);

	//...

}

int main()
{
	//instrukcje
	//task2();
	//task4();
	//instrukcje

	task6();
}
