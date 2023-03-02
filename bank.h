#ifndef BANK_H
#define BANK_H
#include "account.h"
#include "binarysearchtree.h"
#include <iostream>
#include <queue>
using namespace std;

class Bank {

public:
	Bank();
	~Bank();
	void readBankFile(string BankFile);
	void bankTransaction();
	void accountDetails();
	Account* searchAccount(int accountID);

private:
	queue<string> accountTransactionHistory;
	BSTree accData;


};

#endif
