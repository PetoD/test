// cvicnyProjekt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Zdravic.h"

using namespace std;

int main()
{	
	Zdravic _zdravic;

	_zdravic.text = "Ahoj ";
	cout << _zdravic.pozdrav("Peter");
	_zdravic.text = "Nazdar ";
	cout << _zdravic.pozdrav("Tomas");

	cin.get();

    return 0;
}

