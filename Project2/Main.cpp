//Michael Guerrero
//April 15, 2014
//CS 236 C++ Project 2
//4-29-14
//Inheritance/ Banking program
// Description: This runs everything


//#ifndef Account
//#define Account
#include <string>
#include <iostream>
//#include "Checking.cpp"
//#include "CreditCard.cpp"
//#include "Savings.cpp"
#include "Checking.h"
#include "CreditCard.h"
#include "Savings.h"
#include "string"
#include <sstream>
//#include "Account.h"
//#endif

using namespace std;
	int i = -1;
int main()
{
	Checking checking = Checking("Michael's Checkings Account",111111111,100);
	Savings savings = Savings("Michael's Savings Account",111111111,100);
	CreditCard creditcard = CreditCard("Michael's CreditCard Account",111111111,100);

	int j;
	string s;
	double d;
//	long l;
	while(i != 0){
		cout << "Checking balance: " << checking.Getbalance(); cout << endl;
		cout << "Savings balance: " << savings.Getbalance(); cout << endl;
		cout << "Credit Card balace: " << creditcard.Getbalance(); cout << endl;
		cout << endl;

		cout << "1. Savings Deposit" << endl;
		cout << "2. Savings Withdrawel" << endl;
		cout << "3. Checking Deposit" << endl;
		cout << "4. Write A Check" << endl;
		cout << "5. Credit Card Payment" << endl;
		cout << "6. Make A Charge" << endl;
		cout << "7. Display Savings" << endl;
		cout << "8. Display Checking" << endl;
		cout << "9. Display Credit Card" << endl;
		cout << "0. Exit" << endl;

		cin >> i ;
		if(i ==1){
			cout << "How much do you want to deposit?" << endl;
			cin >> d;
			savings.MakeDeposit(d);
		}
		else if(i ==2){
			cout << "How much do you want to withdraw?" << endl;
			cin >> d;

			savings.DoWithdraw(d);
		}
		else if(i ==3){
			cout << "How much do you want to deposit?" << endl;
			cin >> d;
			checking.MakeDeposit(d);
			
		}
		else if(i ==4){
			cout << "What is the Checking Number?" << endl;
			cin >> j;
			cout << "What is the Amount?" << endl;
			cin >> d;
			checking.WriteCheck(j,d);
		}
		else if(i ==5){
			cout << "How much do you want to pay?" << endl;
			cin >> d;
			creditcard.MakePayment(d);
		}
		else if(i ==6){
			cout << "What is this charge for? (Interest is 20%)" << endl;
			cin >> s;
			cout << "What is the amount for the charge?(Limit 100,000$)" << endl;
			cin >> d;
			creditcard.DoCharge(s,d);
		}
		else if(i ==7){
			savings.display();
			cout<< endl;
			//cout << endl << "Press Any Key to return to menu" << endl;
		}
		else if(i ==8){
			checking.display();
			cout<< endl;
			//cout << endl << "Press Any Key to return to menu" << endl;
		}
		else if(i ==9){
			creditcard.display();
			cout<< endl;
			//cout << endl << "Press Any Key to return to menu" << endl;
		}
		else
		{
		cout << "Invalid Input" << endl;
		}

	}
};