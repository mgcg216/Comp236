// Michael Guerrero
// March 30, 2014
// CS 236 C++ Project 3
//Inheritance/ Game program
// Description: Blimp Base class Definition .cpp that creates the functions that will run.
#include "Blimp.h"	//needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

void Blimp::move_position(){
	if (GetStatus() > 0){
	int dir = rand() % 2;
	int mov = (dir == 0)? -13 : 13;
	SetX_position(GetX_position() + mov);

	cout << "Blimp moves position  "<< GetX_position()*GetY_position();
	}
	else {
		cout << "Blimp";
	}
}

void Blimp::fire_weapon(){
	if (GetStatus() > 0){
		if (GetAmmo() > 0){
		cout << "  Blimp dropped a chemical bombed your face  " << endl;
		SetAmmo(GetAmmo() - 1);
		}
		else {
			cout << "  OUT OF AMMO" << endl;
		}
	}
	else{
		cout << "  Is dead" << endl;
	}
}

void Blimp::update_status(){
	if (GetStatus() > 0 ){
		SetStatus(GetStatus() - 25);
		string hlth = (GetStatus() > 0)? "has been hurt" : "is dead";
		cout << "  Blimp status: Blimp "<< hlth << " HP = " <<  GetStatus() <<endl;
	}
}

Blimp::Blimp(){
	SetX_position(300);
	SetY_position(500);
	SetWidth(3);
	SetHeight(10);
	SetStatus(100);
	SetAmmo(50);
}