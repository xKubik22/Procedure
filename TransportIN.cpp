#include <iostream>
#include <fstream>
#include <string>

#include "Transport.h"

using namespace std;

Plane* InPlane(Plane &p, ifstream &ifst);
Train* InTrain(Train &t, ifstream &ifst);
Ship* Inship(Ship &s, ifstream&ifst);
string FileRead(ifstream &ifst);

Transport* In(ifstream &ifst)
{
	Transport* s = new Transport;
	int k;
	Plane* p;
	Train* t;
	Ship* shp;
	k = stoi(FileRead(ifst));
	switch (k) 
	{
	case 1:
		p = new Plane;
		s->obj = (void*)InPlane(*p, ifst);
		s->k = Plane;
		break;
	case 2:
		t = new Train;
		s->k = Train;
		s->obj = (void*)InTrain(*t, ifst);
		break;
	case 3:
		shp = new Ship;
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

