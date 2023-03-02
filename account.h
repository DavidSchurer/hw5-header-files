#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "bank.h"
#include "binarysearchtree.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account {

public:
	Account(string firstName, string lastName, int accountID);
	~Account();
	friend ostream& operator<<(ostream& out, const Account& account);
	void Deposit(int accountBalance, int amount);
	bool Withdraw(int accountBalance, int amount);
	bool Transfer(int accountBalance, int amount, Account& destinationAccount);
	void PrintTransactionHistory(int accountID, int accountBalance) const;
	void PrintBalanceHistory() const;

private:
	string firstName;
	string lastName;
	int accountID;
	int accountBalance[10];
	string transactionHistory[10];


};

#endif
