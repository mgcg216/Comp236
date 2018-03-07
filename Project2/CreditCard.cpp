// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 2
//4-29-14
//Inheritance/ Banking program
// Description: CreditCard Function .cpp that creates the functions that to restrict the input.
#include "CreditCard.h"	//needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>


using namespace std;
CreditCard::CreditCard(){

}

CreditCard::CreditCard(string name, long taxID, double balance){
	SetName(name);
	SetTaxID(taxID);
	Setbalance(balance);
}
void CreditCard::DoCharge(string name, double amount) {
	if (name.length() <= 50 ) {
		if (numwithdraws < 10)
		{
			last10charges[numwithdraws] = name; 
			last10withdraws[numwithdraws] = amount;
			numwithdraws ++;
			
		}
		else{
			int i;
			for(i = 0; i <9;i++)
				{
				last10charges[i] =last10charges[i+1];
				last10withdraws[i] = last10withdraws[i +1];
				}
			last10charges[i] = name;
			last10withdraws[i] = amount;
			}
	}
	if ((amount < 100000 && amount >0)&& Getbalance() >= -1000000) {
		Setbalance(Getbalance() - (amount + amount * .20));
	}
		else
	{
		cout << "Invalid Input" << endl;
	}
}
void CreditCard::MakePayment(double amount){

		MakeDeposit(amount);

	
}

void CreditCard::display(){
	Account::display(GetName(), GetTaxID(), Getbalance());
	cout <<"The last few charges are for: " << endl;
	int k = 0;
	for(k; k < numwithdraws; k++)
	{
		cout << last10charges[k] << "    ";
	}

}