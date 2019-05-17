#include <iostream>
#include <fstream>

#include "Transport.h"

using namespace std;

void OutPlane(Plane* p, ofstream &ofst);
void OutTrain(Train* t, ofstream &ofst);
void Outship(Ship* s, ofstream &ofst);

double Time(Transport &t)
{
	double time;
	time = static_cast<double>(t.distAB) / static_cast<double>(t.speed);
	return time;
}

void Out(Transport &t, ofstream &ofst)
{
	switch (t.k)
	{
	case Plane:
		OutPlane((Plane*)t.obj, ofst);
		break;
	case Train:
		OutTrain((Train*)t.obj, ofst);
		break;
	case Ship:
		Outship((Ship*)t.obj, ofst);
		break;
	default:
		ofst << "Incorrect data!" << endl;
		break;
	}
	ofst << "speed = " << t.speed << endl << "distance point to point = " << t.distAB << endl << "Mass = " << t.mass << endl << "time = " << Time(t) << endl;;
}

