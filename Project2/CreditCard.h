// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 2
//4-29-14
//Inheritance/ Banking program
// Description: CreditCard Definition .cpp that iniiates the functions and variables.
//#ifndef Account
#pragma once
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;
class CreditCard:public Account
{
private:
	long cardnumber;
	string last10charges[10];

public:
	void DoCharge(string name, double amount);
	void MakePayment( double amount);

	void display();

	CreditCard();
	CreditCard(string name, long taxID, double balance);
};