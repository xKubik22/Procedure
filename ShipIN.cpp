#include <fstream>
#include <iostream>
#include <string>

#include "Ship.h"

using namespace std;

string FileRead(ifstream &ifst);

ship* Inship(ship &s, ifstream &ifst)
{
	int type;
	s.water = stoi(FileRead(ifst));
	type = stoi(FileRead(ifst));
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