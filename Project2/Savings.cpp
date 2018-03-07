// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 2
//4-29-14
//Inheritance/ Banking program
// Description: Savings Function .cpp that creates the functions that to restrict the input.
#include "Savings.h"	//needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;
Savings::Savings(){
}

Savings::Savings(string name, long taxID, double balance){
	SetName(name);
	SetTaxID(taxID);
	Setbalance(balance);
}
void Savings::DoWithdraw(double amount){
	if (amount <= Getbalance()) 
	{
		Setbalance(Getbalance() - amount);
	}

		if(numwithdraws < 10)
		{
		last10withdraws[numdeposits++] = amount;//place balance into array
		}
		else
		{
			int i;
			for(i = 0; i <9;i++)
			{
				last10withdraws[i] =last10withdraws[i+1];
			}
		last10withdraws[i] = amount;
		}

}

void Savings::display(){
	Account::display(GetName(), GetTaxID(), Getbalance());
	cout <<"The last few withdraws were: " << endl;
	int k = 0;
		for(k; k < numdeposits; k++){
		cout << last10withdraws[k];
	}
}