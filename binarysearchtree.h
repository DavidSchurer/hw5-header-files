#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H
#include "account.h"
#include "bank.h"
#include <iostream>
using namespace std;

// The Binary Search Tree Class (BSTree) will be used to store
// the client accounts for this banking application
class BSTree {

public:
	// The BSTree constructor will initialize an empty binary search tree
	// that will be used for storing the bank accounts
	BSTree();

	// The BSTree destructor will free up all of the dynamically allocated
	// memory that will be used by the binary search tree
	~BSTree();

	// The Insert method will insert a bank account into the
	// binary search tree. If the bank account was successfully
	// inserted, it will return true, otherwise it will return false
	bool Insert(Account* account); 

	// The Retrieve method will retrieve a bank account with a given account ID
	// If the account was successfully retrieved from the binary search tree, return true,
	// otherwise return false
	bool Retrieve(const int& accountID, Account* account) const;

	// The Display method will display the contents of the binary search tree to the output stream
	void Display() const;

	// The Empty method will deallocate all of the dynamically allocated memory that was used
	// by the nodes in the binary search tree, which will empty the binary search tree
	void Empty();

	// The isEmpty method will check to see if the binary search tree is empty or not
	// If the binary search tree is empty, return true, otherwise return false
	bool isEmpty() const;

private:
	// The Node struct in the binary search tree is made up of
	// a pointer to an account, and pointers to the right and left
	// child nodes of this account.
	struct Node
	{
		Account* pAcct;
		Node* right;
		Node* left;
	};

	//This node pointer represents the the root node in the binary search tree
	Node* root;


};

#endif
