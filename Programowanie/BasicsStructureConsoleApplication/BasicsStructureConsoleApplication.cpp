#include "tasks.h"
#include "Exercises.h"

/*
Zadania do samodzielnego wykonania:
W strukturach definiuj tylko pola. Operacje wykonuj w osobnych funkcjach.
Przyjmij poprawne dane wejściowe. Napisy wczytywane przez cin podawaj bez spacji.

* Koszt tankowania.
  Zdefiniuj strukturę FuelPurchase przechowującą nazwę paliwa, cenę jednego
  litra i liczbę zatankowanych litrów. Wczytaj te dane od użytkownika.
  Napisz funkcję przyjmującą zakup jako parametr i zwracającą koszt tankowania.
  Wyświetl nazwę paliwa i kwotę do zapłaty. Cena i liczba litrów są dodatnie.

* Sprzedaż produktu z magazynu.
  Zdefiniuj strukturę StockProduct przechowującą nazwę produktu, cenę jednej
  sztuki i liczbę dostępnych sztuk. Wczytaj te dane oraz liczbę zamawianych
  sztuk. Cena i stan magazynu są nieujemne.
  Napisz funkcję obliczającą wartość całego zapasu oraz funkcję sprzedaży.
  Funkcja sprzedaży otrzymuje produkt przez referencję i liczbę zamawianych
  sztuk. Zmniejsza zapas i zwraca true, jeżeli zamówiono dodatnią liczbę sztuk
  i towaru wystarcza. W przeciwnym razie zwraca false bez zmiany zapasu.
  Wyświetl wartość zapasu przed sprzedażą, informację o powodzeniu sprzedaży
  oraz liczbę pozostałych sztuk i wartość zapasu po próbie sprzedaży.

* Czas postoju na parkingu.
  Zdefiniuj strukturę TimeOfDay z godziną i minutą oraz strukturę ParkingStay
  z numerem rejestracyjnym i dwoma polami TimeOfDay: czasem wjazdu i wyjazdu.
  Wczytaj numer rejestracyjny i oba czasy. Przyjmij poprawne godziny 0–23
  i minuty 0–59; wyjazd następuje tego samego dnia, później niż wjazd.
  Napisz funkcję zamieniającą TimeOfDay na liczbę minut od północy i wykorzystaj
  ją w funkcji obliczającej długość postoju. Wyświetl numer rejestracyjny
  i czas postoju w minutach.

* Czy paczka zmieści się w skrytce?
  Zdefiniuj strukturę Dimensions z szerokością, wysokością i głębokością
  oraz strukturę Parcel z numerem przesyłki i polem Dimensions.
  Wczytaj numer i wymiary paczki oraz maksymalne wymiary wnętrza skrytki
  do osobnej zmiennej Dimensions. Wszystkie wymiary podawaj w centymetrach
  jako dodatnie liczby. W tym zadaniu nie obracamy paczki: porównujemy
  szerokość z szerokością, wysokość z wysokością i głębokość z głębokością.
  Napisz funkcję przyjmującą paczkę i wymiary skrytki, która zwraca informację,
  czy paczka się zmieści. Wymiar równy dopuszczalnemu jest dozwolony.
  Wyświetl numer przesyłki i wynik sprawdzenia.
*/

int main()
{
	task4();
}

