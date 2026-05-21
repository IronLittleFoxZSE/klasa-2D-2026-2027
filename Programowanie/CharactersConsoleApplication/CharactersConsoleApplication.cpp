// CharactersConsoleApplication.cpp 

#include <iostream>
#include <string>

/*
* Wczytaj s³owo i wypisz pierwsz¹ oraz ostatni¹ literê.
* U¿ytkownik podaje tekst, a program zamienia wszystkie litery na wielkie.
* Napisz program, który wypisuje tekst od koñca.
* Zamieñ wszystkie cyfry na znak „*”. Przyk³ad: „abc123” ? „abc***”.
* Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
*
*
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.

*/

//Napisz program który pobierze znak od u¿ytkownika i wyœwieli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//characterFromUser = characterFromUser + 1;

	std::cout << "Poda³eœ znak:" << characterFromUser << "\n";
}

//Napisz program, który wczyta znak z klawiatury 
//i sprawdzi czy jest to ma³a litera alfabetu.
//ZADANIE:
//* czy jest to du¿a litera alfabetu
//* czy  jest to znak cyfry
void task2()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Jest to ma³a litera alfabetu\n";
	else
		std::cout << "Nie jest to ma³a litera alfabetu\n";

	//if (characterFromUser >= 65 && characterFromUser <= 90)
	if (characterFromUser >= 'A' && characterFromUser <= 'Z')
		std::cout << "Jest to du¿a litera alfabetu\n";
	else
		std::cout << "Nie jest to du¿a litera alfabetu\n";
	/*
	char x;
	x = 'a';
	std::cout << x<<"\n";
	x = x + 2;
	std::cout << x << "\n";
	x = 'b' + 2;
	std::cout << x << "\n";
	*/
}

//Napisz program, który poprosi cie o twoje imiê i ciê przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj imiê:\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";
}

//Program sprawdzaj¹cy czy podane has³o jest poprawne 
//(np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", 
//jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj has³o\n";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "Has³o poprawne\n";
	else
		std::cout << "Has³o niepoprawne\n";
}

//Napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.
void task5()
{
	std::string textFromUser;
	std::cout << "Podaj ³añcuch znaków\n";
	std::cin >> textFromUser;

	/*
	textFromUser = "abyrcdgt";
	std::cout << "Pierwszy znak to "<< textFromUser[0] << "\n";
	textFromUser[1] = 'x';
	std::cout << textFromUser << "\n";
	std::cout << "Iloœæ znaków "<< textFromUser.length() << "\n";
	*/

	int counter = 0;
	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	std::cout << "Ma³ych liter 'a' jest " << counter << "\n";
}

//Napisz program który wygeneruje has³o.
void task6()
{
	std::string passowrd = "";
	int passordLength;

	const int LOWER_RANGE_LENGTH = 4;
	const int UPPER_RANGE_LENGTH = 12;

	srand(time(NULL));
	passordLength = rand() % (UPPER_RANGE_LENGTH - LOWER_RANGE_LENGTH + 1) + LOWER_RANGE_LENGTH;

	for (int i = 0; i < passordLength; i++)
	{
		char character;
		character = rand() % ('z' - 'a' + 1) + 'a';

		passowrd = character + passowrd;
	}

	std::cout << "Wygenerowane has³o " << passowrd << "\n";

	//passowrd = "ola";
	//std::cout << passowrd[3000];
}

//Wczytaj s³owo i wypisz pierwsz¹ oraz ostatni¹ literê.
void task7()
{
	std::string textFromUser;
	std::cout << "Podaj ³añcuch znaków\n";
	//std::cin >> textFromUser;
	std::getline(std::cin, textFromUser);

	std::cout << "Podano dane: " << textFromUser << "\n";
	std::cout << "Pierwsza litera " << textFromUser[0] << "\n";
	std::cout << "Ostatnia litera " << textFromUser[textFromUser.length() - 1] << "\n";

}

//U¿ytkownik podaje tekst, a program zamienia wszystkie litery na wielkie.
void task8()
{
	std::string textFromUser;
	std::cout << "Podaj ³añcuch znaków\n";
	//std::cin >> textFromUser;
	std::getline(std::cin, textFromUser);

	for (int i = 0; i < textFromUser.length(); i++)
	{
		//if (textFromUser[i] >= 97 && textFromUser[i] <= 122)
		if (textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
		{

		}
	}
}

//Program sprawdzaj¹cy czy podany ci¹g znaków 
//jest palindromem (czyli takim, który czytany od ty³u jest taki sam
//jak czytany od przodu, np. "kajak")
void task20()
{
	std::string textFromUser;
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;

	std::string reverseText = "";
	for (int i = 0; i < textFromUser.length(); i++)
	{
		reverseText = textFromUser[i] + reverseText;
	}

	if (textFromUser == reverseText)
		std::cout << "Ten tekst jest palindromem\n";
	else
		std::cout << "Ten tekst nie jest palindromem\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task6();
}
