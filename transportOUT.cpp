#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

void Outplane(plane* p, ofstream &ofst);
void Outtrain(train* t, ofstream &ofst);
void Outship(ship* s, ofstream &ofst);

double Time(transport &t)
{
	double time;
	time = static_cast<double>(t.distAB) / static_cast<double>(t.speed);
	return time;
}

void Out(transport &t, ofstream &ofst)
{
	switch (t.k)
	{
	case Plane:
		Outplane((plane*)t.obj, ofst);
		break;
	case Train:
		Outtrain((train*)t.obj, ofst);
		break;
	case Ship:
		Outship((ship*)t.obj, ofst);
		break;
	default:
		ofst << "Incorrect data!" << endl;
		break;
	}
	ofst << "speed = " << t.speed << endl << "distance point to point = " << t.distAB << endl << "Mass = " << t.mass << endl << "time = " << time(t) << endl;;
}

