#ifndef __ZDRAVIC_H__
#define __ZDRAVIC_H__
#include <string>

using namespace std;

class Zdravic
{
public:
	Zdravic();
	~Zdravic();
	string text;
	string pozdrav(string meno);
};

#endif __ZDRAVIC_H__
