// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 2
//4-29-14
//Inheritance/ Banking program
// Description: Checking Definition .cpp that iniiates the functions and variables.

#pragma once
#include <iostream>
#include <string>

#include "Account.h"




using namespace std;
class Checking:public Account
{
private:
	int last10checks[10];

public:
	void WriteCheck(int checknum, double amount);

	void display();

	Checking();
	Checking(string name, long taxID, double balance);
};