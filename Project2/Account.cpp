// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 2
//4-29-14
//Inheritance/ Banking program
// Description: Account Function .cpp that creates the functions that to restrict the input.
#include "Account.h"	//needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

Account::Account(){
	numdeposits = 0;
	numwithdraws = 0;
}

Account::Account(string name, long taxID, double balance){
	SetName(name);
	SetTaxID(taxID);
	Setbalance(balance);
}
string Account::GetName(){
	return name;
}

long Account::GetTaxID(){
	return taxID;
}

double Account::Getbalance(){
	return balance;
}

void Account::SetName(string nm){
	if(nm.length() < 50)
	name = nm;
	else{
	cout << endl << "Not a valid input" << endl;
	}
}

void Account::SetTaxID(long stid){
	if(stid >= 100000000 && stid < 1000000000)
	taxID = stid;
	else{
	cout << endl << "Not a valid input" << endl;
	}
};

void Account::Setbalance(double bl){
	balance = bl;
}

void Account::MakeDeposit(double amount){
	if (amount > 0) {
		if(numdeposits < 10){
			 last10deposits[numdeposits++] = balance;//place balance into array
		}
		else{
			int i;
			for(i = 0; i <9;i++){
				last10deposits[i] =last10deposits[i+1];
			}
			last10deposits[i] = balance;
		}

			balance = balance+amount;
	}
	else
		{
			cout << "Invalid Input" << endl;
		}
}

void Account::display(string name, long taxid, double balance){
	cout <<"The name of the account: " << name <<endl;
	cout <<"The Tax ID of the account: " << taxid <<endl;
	cout <<"The balance in this account: " << balance << endl;
}