#include <fstream>
#include <iostream>
#include "plane.h"
using namespace std;
void Outplane(plane* p, ofstream &ofst)
{
	ofst << "It is plane " << endl << "distance = " << p->dist << endl << "capacity = " << p->cap << endl << "speed = " << p->speed << endl << "distance point to point = " << p->distAB << endl;
}