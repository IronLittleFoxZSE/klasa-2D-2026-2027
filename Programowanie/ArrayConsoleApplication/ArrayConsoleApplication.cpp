// ArrayConsoleApplication.cpp 

#include <iostream>

/*
Zadania:

* Utwórz tablicę zawierającą 5 liczb całkowitych podanych przez użytkownika i wypisz wszystkie jej elementy.
* Wczytaj do tablicy 10 liczb, a następnie wypisz tylko te, które są większe od zera.
* W tablicy znajdują się oceny ucznia. Oblicz średnią arytmetyczną ocen.
* Dana jest tablica 10 liczb. Policz, ile elementów jest parzystych.
* Wczytaj do tablicy 5 liczb i wypisz je w odwrotnej kolejności.
* Dana jest tablica liczb całkowitych. Sprawdź, czy w tablicy znajduje się liczba podana przez użytkownika.
* W tablicy zapisano wiek 7 osób. Policz, ile osób jest pełnoletnich.
* Dana jest tablica 5 liczb. Oblicz różnicę między największym a najmniejszym elementem.

*/

/*
DRY - don't repeat yourself - nie powtarzaj się
KISS - Keept it simple, stupid - trzymaj prostotę głupcze
YAGNI - you aren't gonna need it - nie potrzebujesz tego
*/

//Napisz program, który wczyta np. 5 liczb 
//a następnie wyświetli je w odwrotnej kolejności.
void task1()
{
	/*
	int number0, number1, number2, number3, number4 ;

	std::cout << "Podaj liczbę:\n";
	std::cin >> number0;
	std::cout << "Podaj liczbę:\n";
	std::cin >> number1;
	std::cout << "Podaj liczbę:\n";
	std::cin >> number2;
	std::cout << "Podaj liczbę:\n";
	std::cin >> number3;
	std::cout << "Podaj liczbę:\n";
	std::cin >> number4;

	std::cout << number4 << "\n";
	std::cout << number3 << "\n";
	std::cout << number2 << "\n";
	std::cout << number1 << "\n";
	std::cout << number0 << "\n";
	*/

	/*
	int x = 0;

	std::cout << "Podaj liczbę:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbę:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbę:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbę:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbę:\n";
	std::cin >> "number" + x;
	x++;
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> "number" + i;
	}
	*/

	//int number0, number1, number2, number3, number4;
	const unsigned short ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];
	//numbers[2] = 10;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> numbers[i];
	}

	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
		std::cout << numbers[i] << "\n";

}

//Napisz program, który uzupełni tablicę liczbami losowymi a następnie znajdzie minimum oraz maksimum.
void task2()
{
	const short LOWER_RANGE = -40;
	const short UPPER_RANGE = -10;

	const unsigned short ARRAY_SIZE = 100;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}

	int max = numbers[0];

	for (int i = 1; i < ARRAY_SIZE; i++)
		if (numbers[i] > max)
			max = numbers[i];

	std::cout << "Max to: " << max << "\n";

	int min = numbers[0];

	for (int i = 1; i < ARRAY_SIZE; i++)
		if (numbers[i] < min)
			min = numbers[i];

	std::cout << "Min to: " << min << "\n";
}

//Napisz program obliczający średnią arytmetyczną elementów w tablicy liczb całkowitych.
void task3()
{
	// <LOWER_RANGE; UPPER_RANGE> przy założeniu, że LOWER_RANGE <= UPPER_RANGE
	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	const unsigned short ARRAY_SIZE = 3;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//----------------------------------------------------------------------------

	int sum = numbers[0];
	for (int i = 1; i < ARRAY_SIZE; i++)
		sum = sum + numbers[i];

	double avg = sum * 1.0 / ARRAY_SIZE;

	std::cout << "Średnia wynosi: " << avg << "\n";
}

//Napisz program, który wczyta numer dnia tygodania w następnie wyświetli nazwę tego dnia lub komunikat błedu.
void task4()
{
	short numberOfWeek = 5;
	std::cout << "Podaj numer dnia tygodnia\n";
	std::cin >> numberOfWeek;

	/*
	std::string dayNames[8];
	dayNames[0] = "";
	dayNames[1] = "Poniedziałek";
	dayNames[2] = "Wtorek";
	//..
	dayNames[7] = "Niedziela";
	*/

	std::string dayNames[] = {"", "Poniedziałek", "Wtorek", "Środa", "Czwartek", "Piątek", "Sobota", "Niedziela" };

	if (numberOfWeek > 0 && numberOfWeek < 8)
		std::cout << "Ten dzień to " << dayNames[numberOfWeek] << "\n";
	else
		std::cout << "Niepoprawny dzień\n";
}

int main()
{
	task4();
}

