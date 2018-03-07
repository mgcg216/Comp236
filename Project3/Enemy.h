// Michael Guerrero
// March 30, 2014
// CS 236 C++ Project 3
//Inheritance/ Game program
// Description: Enemy Base class Definition .cpp that iniiates the functions and variables.
//#ifndef Account
#pragma once
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
class Enemy {
private:
	double x_position;
	double y_position;
	double width;
	double height;
	double status;
	int ammo;

protected:
	void SetAmmo(int am);
	void SetX_position(double sx);
	void SetY_position(double sy);
	void SetWidth(double wd);
	void SetHeight(double ht);
	void SetStatus(double st);

	int GetAmmo();
	double GetX_position();
	double GetY_position();
	double GetWidth();
	double GetHeight();
	double GetStatus();

public:
	virtual void move_position() = 0;
	virtual void fire_weapon() = 0;
	virtual void update_status() = 0;
};