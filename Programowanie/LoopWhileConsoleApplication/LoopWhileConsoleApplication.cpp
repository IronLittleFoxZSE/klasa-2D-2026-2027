// LoopWhileConsoleApplication.cpp

#include <iostream>

//Napisz program, który policzy sumê cyfr 
// podanej przez u¿ytkownika liczby.
void task1()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;

	/*
	if (number != 0)
	{
		do
		{
			int digit = number % 10;
			sum = sum + digit;
			number = number / 10;
		} while (number != 0);
	}
	*/

	while (number != 0)
	{
		int digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	}

	std::cout << "Suma cyfr: " << sum << "\n";
}

//Napisz program, który policzy NWD dwóch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsz¹ liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug¹ liczbê\n";
	std::cin >> secondNumber;

	int nwd = 1;

	int min;
	if (secondNumber < firstNumber)
		min = secondNumber;
	else
		min = firstNumber;

	//warunek ? wartoœæ_zwracana_dla_prawdy : wartoœæ_zwracana_dla_fa³szu

	min = (secondNumber < firstNumber) ? secondNumber : firstNumber;

	int counter = 2;

	while (counter <= min)
	{
		if (firstNumber % counter == 0
			&& secondNumber % counter == 0)
			nwd = counter;
		counter++;
	}

	std::cout << "NWD = " << nwd << "\n";

	//wersja 2
	//NWD(a, b) = a				jeœli b = 0
	//NWD(a, b) = NWD(b, a % b) jeœli b != 0
	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	std::cout << "NWD = " << a << "\n";
}

//Napisz program, który wyœwietli "Hello world" 
// tyle razy ile chce u¿ytkownik
void task3()
{
	int howManyTimes;
	std::cout << "Podaj ile razy wyœwietliæ\n";
	std::cin >> howManyTimes;

	/*
	if (howManyTimes >= 1)
	{
		std::cout << "Hello world\n";
		if (howManyTimes >= 2)
		{
			std::cout << "Hello world\n";
			if (howManyTimes >= 3)
			{
				std::cout << "Hello world\n";
				if (howManyTimes >= 4)
				{
					std::cout << "Hello world\n";
					//...
				}
			}
		}
	}
	*/

	/*
	int i = 1;

	if (howManyTimes >= i)
	{
		std::cout << "Hello world\n";
		i++;
		if (howManyTimes >= i)
		{
			std::cout << "Hello world\n";
			i++;
			if (howManyTimes >= i)
			{
				std::cout << "Hello world\n";
				i++;
				if (howManyTimes >= i)
				{
					std::cout << "Hello world\n";
					i++;
					//...
				}
			}
		}
	}
	*/

	int i = 1;
	while (howManyTimes >= i)
	{
		std::cout << "Hello world\n";
		i++;
	}
}

//Napisz program, który wyœwietli 
// liczby parzyste do podanej przez u¿ytkownika liczby
void task4()
{
	int upperRange;
	std::cout << "Podaj górn¹ granicê do wyœwietlenia\n";
	std::cin >> upperRange;


	//if (upperRange >= 2)
	//{
	//	std::cout << "2, ";
	//	if (upperRange >= 4)
	//	{
	//		std::cout << "4, ";
	//		if (upperRange >= 6)
	//		{
	//			std::cout << "6, ";
	//			//..
	//		}
	//	}
	//}


	//int i = 2;

	//if (upperRange >= i)
	//{
	//	std::cout << i << ", ";
	//	i = i + 2;
	//	if (upperRange >= i)
	//	{
	//		std::cout << i << ", ";
	//		i = i + 2;
	//		if (upperRange >= i)
	//		{
	//			std::cout << i << ", ";
	//			i = i + 2;
	//			//..
	//		}
	//	}
	//}


	int i = 2;

	while (upperRange >= i)
	{
		std::cout << i << ", ";
		i = i + 2;
	}
}

//Napisz tabliczkê mno¿enia:
/*
1*1 = 1
1*2 = 2
1*3 = 3
1*4 = 4
.
.
1*9 = 9

2*1 = 2
2*2 = 4
2*3 = 6
.
.
2*9 = 18

3*1 = 3
3*2 = 6
3*3 = 9


9*9 = 81

*/

void task5()
{
	int firstNumber, secondNumber;

	firstNumber = 0;

	while (firstNumber <= 3)
	{
		secondNumber = 0;

		while (secondNumber <= 10)
		{
			std::cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << "\n";
			secondNumber++;
		}
		firstNumber++;
	}
}


//Napisz program kóry obliczy podstawa^wyk³adnik. Obie wartoœci wczytaj od u¿ytkownika
void task7()
{
	//2^5 = 2*2*2*2*2
	//7^8 = 7*7*7*7*7*7*7*7
	//unsigned long long result;
}


int main()
{
	task7();
}
