#include "stdafx.h"
#include "Zdravic.h"
#include <iostream>

using namespace std;

Zdravic::Zdravic()
{
}


Zdravic::~Zdravic()
{
}

string Zdravic::pozdrav(string meno)
{
	return text + meno + "!\n";
}

