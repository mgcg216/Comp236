// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 1
// Description: Automobile Definition .cpp that iniiates the functions and variables.
#include <string>
#include <iostream>

using namespace std;
class automobile {
private:
	string make;
	string model;
	int year;

public:
	string getMake();	//accessor
	void setMake(string mk);	//accessor
	string getModel();	//accessor
	void ToString();
	void setModel(string md);	//accessor
	int getYear();	//accessor
	void setYear(int yr);	//accessor

};// end class automobile