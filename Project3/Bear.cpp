// Michael Guerrero
// March 30, 2014
// CS 236 C++ Project 3
//Inheritance/ Game program
// Description: Bear Base class Definition .cpp that creates the functions that will run.
#include "Bear.h"	//needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

void Bear::move_position(){
	if (GetStatus() >0) {
	int dir = rand() % 2;
	int mov = (dir == 0)? -6 : 6;
	SetX_position(GetX_position() + mov);
	cout << "Bear moves position  "<< GetX_position()*GetY_position();
	}
	else{
		cout << "Bear ";
	}
}

void Bear::fire_weapon(){
	int dir = rand() % 3;
	if (GetStatus() > 0){
		if (dir == 0) {
			cout << "  Bear tore your face  " << endl;
			//SetStatus(GetStatus() - 50);
		}
		else if(dir == 1) {
			cout << "  Bear bites your leg  " << endl;
			//SetStatus(GetStatus() - 25);
		}
		else {
			cout << "  Bear bites your chest  " << endl;
			//SetStatus(GetStatus() - 25);
		}
		}
	else{
		cout << " is Dead " << endl;
	}
}

void Bear::update_status(){
	if (GetStatus() > 0 ){
	SetStatus(GetStatus() - 25);
	string hlth = (GetStatus() > 0)? "has hurt" : "is dead";
	cout << "  Bear status: Blimp " << hlth << " HP = " <<  GetStatus() <<endl;
	}
}

Bear::Bear(){
	SetX_position(300);
	SetY_position(100);
	SetWidth(5);
	SetHeight(15);
	SetStatus(200);
}