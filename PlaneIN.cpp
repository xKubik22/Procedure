#include <fstream>
#include <iostream>
#include "plane.h"
using namespace std;

//namespace simple_shapes{
	plane* Inplane(plane &p, ifstream &ifst)
	{	
		ifst >> p.dist >> p.cap;
		return &p;
	}
	
//}
