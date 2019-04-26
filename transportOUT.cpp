#include <iostream>
#include "transport.h"
#include <fstream>
using namespace std;
	void Outplane(plane* p, ofstream &ofst);
	void Outtrain(train* t, ofstream &ofst);
	
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
		default:
					ofst << "Incorrect data!" << endl;
					break;
		}
		
	}
