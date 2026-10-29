#include <iostream>

struct address
{
	std::string city;
	std::string street;
	std::string houseNumber;
	std::string apartmentNumber;
};


struct person
{
	std::string name, surname;
	int age;
	int height;

	address homeAddress;
	address workAddress;
};


void task3()
{
	person firstPerson;
	person secondPerson;

	firstPerson.name = "Jan";
	firstPerson.homeAddress.city = "Kielce";
}