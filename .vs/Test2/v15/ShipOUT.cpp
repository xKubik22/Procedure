#include <fstream>
#include <iostream>
#include "Ship.h"
using namespace std;

void Outship(ship *s, ofstream &ofst)
{
	ofst << "It is ship: Watercapacity = " << s->water << endl;
	switch (s->typeship)
	{
	case 1:
		ofst << "Type of ship: Lainer" << endl;
		break;
	case 2:
		ofst << "Type of ship: Tanker" << endl;
		break;
	case 3:
		ofst << "Type of ship: Tug" << endl;
		break;
	default:
		break;
	}
}