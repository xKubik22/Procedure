#include <iostream>
#include "transport.h"
#include <fstream>
using namespace std;
	void Outplane(plane* p, ofstream &ofst);
	void Outtrain(train* t, ofstream &ofst);
	void Outship(ship* s, ofstream &ofst);

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
		ofst << "speed = " << t.speed << endl << "distance point to point = " << t.distAB << endl;
		
	}