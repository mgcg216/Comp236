// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 1
// Description: Date Definition .cpp that iniiates the functions and variables.
#include <string>
#include <iostream>

using namespace std;
class Date
{
private:
    int day;
    string month;
    int year;
	string month1;

public:
    void setDay(int dy);
    void setMonth(string mon);
    void setYear(int yr);
	void ToString();
    int getDay();
    string getMonth();
    int getYear();
	void printDate(int format);
	string getMonthNumber(string month1);
};
