#include <fstream>
#include <iostream>
#include "Ship.h"
using namespace std;

ship* Inship(ship &s, ifstream &ifst)
{
	int type;
	ifst >>s.water >> type;
	switch (type)
	{
	case 1:
		s.typeship = Lainer;
	case 2:
		s.typeship = Tanker;
	case 3:
		s.typeship = Tug;
	default:
		break;
	}
	return &s;
}