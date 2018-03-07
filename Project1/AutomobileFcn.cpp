// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 1
// Description: Automobile Function .cpp that creates the functions that to restrict the input.
#include "AutomobileDef.h"	//needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

//	string make;
//	string model;
//	int year;
//get function, pull value out of the object
string automobile::getMake(){
	return make;
}// end function getMake

//set function, put value in to the object
void automobile::setMake(string mk){
	if(mk.length() < 40)
	make = mk;
}// end function setMake

//get function, pull value out of the object
string automobile::getModel(){
	return model;
}// end function getModel

//set function, put value in to the object
void automobile::setModel(string md){
	if(md.length() <40)
	model = md;
}// end function setModel

//get function, pull value out of the object
int automobile::getYear(){
	return year;
}// end function getMake

//set function, put value in to the object
void automobile::setYear(int yr){
		if(yr<2015 && yr>1850) 
	year = yr;
}// end function getMake


void automobile::ToString(){
	 cout <<  "The Year is " <<year <<". The Make is " << make << ". The Model is " << year << endl;
}