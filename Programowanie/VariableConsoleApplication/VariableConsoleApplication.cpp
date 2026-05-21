#include <iostream>

/*
*. 
*. Program obliczaj¹cy objêtoœæ sto¿ka.
*. Program obliczaj¹cy pole ko³a.
*. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
*. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
*. Program obliczaj¹cy objêtoœæ kuli o promieniu r
*. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
*. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
*. Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
*/

//Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli
void task1()
{
	//wczytanie liczby
		//deklaracja zmiennych          1
		//pobranie liczby
			//informacja co chcemy      2
			//oczekiwanie na liczbê     3
	//wyœwietlenie na konsoli           4

	//1
	int numberFromUser; //number_from_user
	//2
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	//3
	std::cin >> numberFromUser;
	//4
	std::cout << "Poda³eœ " << numberFromUser << "\n";
}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task2()
{
	int firstNumberFromUser, secondNumber;

	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug¹ liczbê:\n";
	std::cin >> secondNumber;

	int avg;
	avg = (firstNumberFromUser + secondNumber) / 2;

	std::cout << "Wynik œredniej: " << avg << "\n";
}

//Program obliczaj¹cy pole prostok¹ta.
void task3()
{
	int sideA, lengthSideB, areaOfRectangle;

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task2();
}


/*

Algotytm - skoñczony zbiór instrukcji, który rozwi¹zuje zadany problem.
Okreœla te¿ kolejnoœæ wynonywanych instrukcji.
Zapis algorytmu:
* rysunki
* opis s³owny
* w punktach
* schemat blokowy
* kod Ÿród³owy danego jêzyka programowania
* pseudokod

Zmienna - pewien obszar w pamiêci operacyjnej, w której mo¿na
w danej chwili przechowaæ tylko jedn¹ dan¹.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów

int - 2 bajtowa lub 4 bajtowa liczba ca³kowita ze znakiem
short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pamiêci, identyfikator
Warunki niezbêdne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka 

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
* jeœli wiele s³ów to w miejscu spacji podkreœlenie lub zaczynaj¹c od drugiego
  s³owa piszemy je z du¿ej litery
* piszemy po angielsku
*/