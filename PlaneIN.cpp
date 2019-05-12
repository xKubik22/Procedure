#include <fstream>
#include <iostream>
#include <string>

#include "Plane.h"

using namespace std;

string FileRead(ifstream &ifst);

plane* Inplane(plane &p, ifstream &ifst)
{
	p.dist = stoi(FileRead(ifst));
	p.cap = stoi(FileRead(ifst));
	return &p;
}
