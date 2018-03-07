// Michael Guerrero
// March 30, 2014
// CS 236 C++ Project 3
//Inheritance/ Game program
// Description: Enemy Base class Definition .cpp that creates the functions that will run.
#include "Enemy.h"
#include <string>
#include <iostream>
#include <sstream>


void Enemy::SetX_position(double sx){
	x_position = sx;
}

void Enemy::SetY_position(double sy){
	y_position = sy;
}

void Enemy::SetWidth(double wd){
	width = wd;
}

void Enemy::SetHeight(double ht){
	height = ht;
}

void Enemy::SetStatus(double st){
	status = st;
}

void Enemy::SetAmmo(int am){
	ammo = am;
}

double Enemy::GetX_position(){
	return x_position;
}

double Enemy::GetY_position(){
	return y_position;
}

double Enemy::GetWidth(){
	return width;
}

double Enemy::GetHeight(){
	return height;
}

double Enemy::GetStatus(){
	return status;
}

int Enemy::GetAmmo(){
	return ammo;
}
