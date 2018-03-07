// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 1
// Description: The main function that runs everything
#include <string>
#include <iostream>
//#include "DateFcn.cpp"
//#include "AutomobileFcn.cpp"
//#include "PeopleFcn.cpp"
#include "DateDef.h"
#include "AutomobileDef.h"
#include "PeopleDef.h"
#include <iostream>
#include "string"
#include <sstream>
using namespace std;

int main()
{
Date birthday;
int d = 1;
cout << "What is the day of your birthday?   ";
cin >> d;
birthday.setDay(d);
string m = "jan";
cout << "What is the month of your birthday?(type first 3 letters of the month)   ";
cin >> m;
birthday.setMonth(m);
int y = 1;
cout << "What is the year of your birthday?   ";
cin >> y;
birthday.setYear(y);
birthday.ToString();
cout << "Choose a format (0 - 3)";
int asdf = 0;
cin >> asdf;
birthday.getMonthNumber(m);
birthday.printDate(asdf);


automobile car;
string ma = "car";
cout << "What is the Make of your car?   ";      
cin >> ma;
car.setMake(ma);
string me = "car";
cout << "What is the Model of your car?   ";                                   
cin >> me;
car.setModel(me);
int c = 2000;
cout << "What is the year of your car?   ";      
cin >> c;
car.setYear(c);
car.ToString();



People person;
string fin = "john";
cout << "What is the first name of a celebrity?   ";      
cin >> fin;
person.setFirstName(fin);
string lin = "doe"; 
cout << "What is the last name of a celebrity?   ";                                   
cin >> lin;
person.setLastName(lin);
int old = 25;
cout << "How old is she/he?   ";      
cin >> old;
person.setAge(old);
person.ToString();
system("pause");


}
