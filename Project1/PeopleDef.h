// Michael Guerrero
// March 25, 2014
// CS 236 C++ Project 1
// Description: People Definition .cpp that iniiates the functions and variables.
#include <string>
#include <iostream>

using namespace std;
class People
{
private:
    int age;
    string firstname;
    string lastname;

public:
    void setAge(int ag);
    void setFirstName(string fn);
    void setLastName(string ln);
	void ToString();
    int getAge();
    string getFirstName();
    string getLastName();
};
