// Inherate.cpp : Defines the entry point for the console application.
//
#include "dino.h"
#include "ground.h"
#include "flying.h"
#include "stdafx.h"
#include <conio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;



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

