#include <fstream>
#include <iostream>
#include "Ship.h"
using namespace std;

ship* Inship(ship &s, ifstream &ifst)
{
	int type;
	ifst >>s.water >> type;
	if (type== 1)
	{
		s.typeship = Lainer;
	}
	else
	{
		if (type == 2)
		{
			s.typeship = Tanker;
		}
		else
		{
			if (type == 3)
			{
				s.typeship = Tug;
			}
			else
			{
				cout << "ERROR IN FAILIN.TXT";
				exit(0);
			}
		}
	}
	return &s;
}