// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 1
//4-29-14
//Inheritance/ Banking program
// Description: Account Definition .cpp that iniiates the functions and variables.
#pragma once
#include <string>
#include <iostream>

using namespace std;
class Account {
private:
	string name;
	long taxID;
	double balance;
protected:
	double last10withdraws[10];
	double last10deposits[10];
	int numdeposits;
	int numwithdraws;

public:
	void SetName(string nm);
	void SetTaxID(long stid);
	void Setbalance(double bl);
	string GetName();
	long GetTaxID();
	double Getbalance();

	void MakeDeposit(double amount);

	void display(string name, long taxid, double balance);

	Account();
	Account(string name, long taxID, double balance);
};