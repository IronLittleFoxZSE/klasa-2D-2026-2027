#include "Exercises.h"
#include <iostream>
#include <string>

struct FuelPurchase
{
    std::string fuelName;
    double pricePerLiter;
    double liters;
};

void readFuelPurchase(FuelPurchase& purchase)
{
    std::cout << "Podaj nazwe paliwa (bez spacji): ";
    std::cin >> purchase.fuelName;
    std::cout << "Podaj cene jednego litra: ";
    std::cin >> purchase.pricePerLiter;
    std::cout << "Podaj liczbe zatankowanych litrow: ";
    std::cin >> purchase.liters;
}

double calculateFuelCost(FuelPurchase purchase)
{
    return purchase.pricePerLiter * purchase.liters;
}

/*
Koszt tankowania.
Zdefiniuj strukturę FuelPurchase przechowującą nazwę paliwa, cenę jednego
litra i liczbę zatankowanych litrów. Wczytaj te dane od użytkownika.
Napisz funkcję przyjmującą zakup jako parametr i zwracającą koszt tankowania.
Wyświetl nazwę paliwa i kwotę do zapłaty. Cena i liczba litrów są dodatnie.
*/
void exerciseTask1()
{
    FuelPurchase purchase;
    readFuelPurchase(purchase);

    double cost = calculateFuelCost(purchase);
    std::cout << "Paliwo: " << purchase.fuelName << "\n";
    std::cout << "Koszt tankowania: " << cost << " PLN\n";
}
