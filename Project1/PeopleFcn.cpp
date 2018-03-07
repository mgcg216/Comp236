// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 1
// Description: People Function .cpp that creates the functions that to restrict the input.
#include "PeopleDef.h"	//needed if files are separate
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

//	string fn;
//	string ln;
//	int ag;
//get function, pull value out of the object
string People::getFirstName(){
	return firstname;
}// end function getFirstName

//set function, put value in to the object
void People::setFirstName(string fn){
	if(fn.length() < 40)
	firstname = fn;
}// end function setFirstName

//get function, pull value out of the object
string People::getLastName(){
	return lastname;
}// end function getLastName

//set function, put value in to the object
void People::setLastName(string ln){
	if(ln.length() <40)
	lastname = ln;
}// end function setLastName

//get function, pull value out of the object
int People::getAge(){
	return age;
}// end function getAge

//set function, put value in to the object
void People::setAge(int ag){
		if(ag<2015 && ag>0) 
	age = ag;
}// end function setAge

void People::ToString(){
	 cout <<  "The name is " <<firstname << " " << lastname << ". The age is " << age << endl;
}