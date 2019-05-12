#include <fstream>
#include <iostream>
#include "Ship.h"
using namespace std;

void Outship(ship *s, ofstream &ofst)
{
	ofst << "It is ship: " << endl << "Watercapacity = " << s->water << endl << "Type of ship : ";
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
				ofst << "Incorrect type of ship" << endl;
			}
		}
	}
}