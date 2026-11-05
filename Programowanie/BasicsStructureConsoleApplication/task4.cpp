#include <iostream>

struct BankAccount
{
	double balance;
	std::string owner;
	std::string currency;
	//bool isActive;
};

void accountInformation(BankAccount& account)
{
	std::cout << "Informacja o koncie bankowym\n";
	std::cout << "Właściciel: " << account.owner << "\n";
	std::cout << "Saldo: " << account.balance << " " << account.currency << "\n";
}

void depositToAccount(BankAccount& account, double amount)
{
	if (amount >= 0 /* && account.isActive == true*/)
		account.balance = account.balance + amount;
}

bool withdrawalFromAccount(BankAccount& account, double amount)
{
	if (amount >= 0
		&& account.balance >= amount)
	{
		account.balance = account.balance - amount;
		return true;
	}

	return false;
}

void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
{
	if (withdrawalFromAccount(sourceAccount, amount))
		depositToAccount(targetAccount, amount);
}

void task4()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "zł";

	accountInformation(firstAccount);
	depositToAccount(firstAccount, 100);
	accountInformation(firstAccount);

	withdrawalFromAccount(firstAccount, 200);
	accountInformation(firstAccount);


	BankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "zł";

	accountInformation(secondAccount);

	transferBetweenAccounts(firstAccount, secondAccount, 8100);

}