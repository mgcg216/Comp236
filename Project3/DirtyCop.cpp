// Michael Guerrero
// March 30, 2014
// CS 236 C++ Project 3
//Inheritance/ Game program
// Description: DirtyCop Base class Definition .cpp that creates the functions that will run.
#include "DirtyCop.h"	//needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

void DirtyCop::move_position(){
	if(GetStatus() > 0 ){
	int dir = rand() % 2;
	int mov = (dir == 0)? -3 : 3;
	SetX_position(GetX_position() + mov);

	cout << "Dirty moves position  "<< GetX_position()*GetY_position();
	}
	else{
		cout << "Dirty Cop" ;
	}
}

void DirtyCop::fire_weapon(){
	if(GetStatus() > 0 ){
		if (GetAmmo() > 0){
		cout << "  Dirty Cop shot your face  " << endl;
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

void DirtyCop::update_status(){
	if (GetStatus() > 0 ){
		SetStatus(GetStatus() - 25);
		string hlth = (GetStatus() > 0)? "has been shot" : "is dead";
		cout << "  Dirty Cop status: Dirty Cop " << hlth << " HP = " << GetStatus() <<endl;
	}
}

DirtyCop::DirtyCop(){
	SetX_position(300);
	SetY_position(500);
	SetWidth(3);
	SetHeight(10);
	SetStatus(100);
	SetAmmo(10);
}