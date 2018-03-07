// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 2
//4-29-14
//Inheritance/ Banking program
// Description: Savings Definition .cpp that iniiates the functions and variables.
//#ifndef Account
#pragma once
#include <iostream>
#include <string>
#include "Account.h"

//
using namespace std;
class Savings:public Account
{
public:
	void DoWithdraw(double amount);

	void display();

	Savings();
	Savings(string name, long taxID, double balance);
};