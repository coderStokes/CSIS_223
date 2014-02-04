// Inherate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class dino
{
public:
	dino(){ light = false; }
	void attack(string how)
	{
		string my_attack = how;

		cout << how << endl;
		
	}
private:
	bool light;
};


	//flying inherits functionality from dino (the mother)
class flying : public dino
{
public:
	string set()
	{
		return "I swoop on down on you!";
	}
private:

};

		//ground inherits functionality from dino (the mother)
class ground : public dino
{
public:

	string set()
	{
		return "Charrrrge!!!";
	}
private:
};


int _tmain(int argc, _TCHAR* argv[])
{
	ground land;
	flying air;

	// air.set/land.set returns the string of the attack into the mother function
	air.attack(air.set());
	land.attack(land.set());



	_getch();
	return 0;
}

