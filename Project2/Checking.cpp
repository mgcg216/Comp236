// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 2
//4-29-14
//Inheritance/ Banking program
// Description: Checking Function .cpp that creates the functions that to restrict the input.
#include "Checking.h"	//needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;
Checking::Checking(){
};

Checking::Checking(string name, long taxID, double balance){
	SetName(name);
	SetTaxID(taxID);
	Setbalance(balance);
};
void Checking::WriteCheck(int checknum, double amount)
{
	if(checknum >= 1000 && checknum <10000)
	{

		if(numdeposits < 10)
		{
			last10checks[numdeposits] = checknum;//place balance into array
			numdeposits++;
		}
		else{
			int i;
			for(i = 0; i <9;i++)
				{
				last10checks[i] =last10checks[i+1];
				}
			last10checks[i] = checknum;
			
			}
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	if(amount <= Getbalance())
	{
		Setbalance(Getbalance() - amount);
	}
	else
	{
		cout << "Invalid Input" << endl;
	}

};

void Checking::display(){
	Account::display(GetName(), GetTaxID(), Getbalance());
	cout <<"The last few checks were: " << endl;
	int k = 0;
		for(k; k < numdeposits; k++){
		cout << last10checks[k];
	}
};