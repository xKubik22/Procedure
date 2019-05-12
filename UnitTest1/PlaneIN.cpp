#include <fstream>
#include <iostream>
#include "plane.h"
using namespace std;

	plane* Inplane(plane &p, ifstream &ifst)
	{	
		ifst >> p.dist >> p.cap;
		return &p;
	}
	string Get_all(plane *p)
	{
		return string(to_string(p->dist)+ to_string(p->cap));
	}
