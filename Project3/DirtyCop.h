// Michael Guerrero
// March 30, 2014
// CS 236 C++ Project 3
//Inheritance/ Game program
// Description: Dirty Cop class Definition .cpp that iniiates the functions and variables.
#pragma once
#include <iostream>
#include <string>
#include "Enemy.h"

using namespace std;
class DirtyCop:public Enemy{
public:
	DirtyCop();
	void move_position();
	void fire_weapon();
	void update_status();
};
