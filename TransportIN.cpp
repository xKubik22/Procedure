#include <iostream>
#include <fstream>
#include <string>

#include "Transport.h"

using namespace std;

plane* Inplane(plane &p, ifstream &ifst);
train* Intrain(train &t, ifstream &ifst);
ship* Inship(ship &s, ifstream&ifst);
string FileRead(ifstream &ifst);

transport* In(ifstream &ifst)
{
	transport* s = new transport;
	int k;
	plane* p;
	train* t;
	ship* shp;
	k = stoi(FileRead(ifst));
	switch (k) 
	{
	case 1:
		p = new plane;
		s->obj = (void*)Inplane(*p, ifst);
		s->k = Plane;
		break;
	case 2:
		t = new train;
		s->k = Train;
		s->obj = (void*)Intrain(*t, ifst);
		break;
	case 3:
		shp = new ship;
		s->k = Ship;
		s->obj = (void*)Inship(*shp, ifst);
		break;
	default:
		return 0;
	}
	s->speed = stoi(FileRead(ifst));
	s->distAB = stoi(FileRead(ifst));
	s->mass = atof(FileRead(ifst).c_str());
	return s;
}

