#include <fstream>
#include <iostream>

#include "Plane.h"

using namespace std;

void OutPlane(Plane* p, ofstream &ofst)
{
	ofst << "It is Plane " << endl << "distance = " << p->dist << endl << "capacity = " << p->cap << endl;
}