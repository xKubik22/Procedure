#include <fstream>
#include <iostream>

#include "Ship.h"

using namespace std;

void Outship(Ship *s, ofstream &ofst)
{
	ofst << "It is Ship" << endl << "Watercapacity = " << s->water << endl << "Type of Ship : ";
	if (s->typeship == Lainer)
	{
		ofst << "Lainer" << endl;
	}
	else
	{
		if (s->typeship == Tanker)
		{
			ofst << "Tanker" << endl;
		}
		else
		{
			if (s->typeship == Tug)
			{
				ofst << "Tug" << endl;
			}
			else
			{
				ofst << "Incorrect type of Ship" << endl;
			}
		}
	}
}