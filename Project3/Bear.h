// Michael Guerrero
// March 30, 2014
// CS 236 C++ Project 3
//Inheritance/ Game program
// Description: Bear class Definition .cpp that iniiates the functions and variables.
#pragma once
#include <iostream>
#include <string>
#include "Enemy.h"

using namespace std;
class Bear:public Enemy{
public:
	Bear();
	void move_position();
	void fire_weapon();
	void update_status();
};