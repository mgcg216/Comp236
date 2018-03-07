// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 1
// Description: Date Function .cpp that creates the functions that to restrict the input. Also formula number
#include "DateDef.h"
#include <string>
#include <iostream>

using namespace std;
//get function, pull value out of the object
int Date::getDay(){
	return day;
}// end function getMake

//set function, put value in to the object
void Date::setDay(int dy){
	if(dy < 31 && dy >0)
		day = dy;
}// end function setMake

//get function, pull value out of the object
string Date::getMonth(){
	return month;
}// end function getModel

//set function, put value in to the object
void Date::setMonth(string mn){
	if(mn.length() <40)
	month = mn;
}// end function setModel

//get function, pull value out of the object
int Date::getYear(){
	return year;
}// end function getMake

//set function, put value in to the object
void Date::setYear(int yr){
		if(yr<2015) 
	year = yr;
}// end function getMake

void Date::ToString(){
	 cout <<  "The Year is " <<year <<". The Month is " << month << ". The Day is " << day << endl;
}

string Date::getMonthNumber(string month1){
	if (month1=="Jan") month = "1";
	else if (month1=="Jan") month = "1";
	else if (month1=="Feb") month = "2";
	else if (month1=="feb") month = "2";
	else if (month1=="mar") month = "3";		
	else if (month1=="Mar") month = "3";
	else if (month1=="Apr") month = "4";
	else if (month1=="apr") month = "4";
	else if (month1=="May") month = "5";
	else if (month1=="may") month = "5";
	else if (month1=="Jun") month = "6";
	else if (month1=="jun") month = "6";
	else if (month1=="jul") month = "7";
	else if (month1=="Jul") month = "7";
	else if (month1=="Aug") month = "8";
	else if (month1=="aug") month = "8";
	else if (month1=="sep") month = "9";
	else if (month1=="Seo") month = "9";
	else if (month1=="Oct") month = "10";
	else if (month1=="oct") month = "10";
	else if (month1=="Nov") month = "11";
	else if (month1=="nov") month = "11";
	else if (month1=="dec") month = "12";
	else if (month1=="Dec") month = "12";
//	else month1 = 0;
	return month1;
}

void Date::printDate(int format) {
	if (format = 0) cout << getMonthNumber(month) << " " << day << " " << year << endl;
	else if (format = 1) cout << day << " " << getMonthNumber(month) << " " << year << endl;
	else if (format = 2) cout << month << "-" << day << "-" << year << endl;
	else if (format = 3) cout << month << "/" << day << "/" << year << endl;
}
