
#include <iostream>
#include "transport.h"
#include <fstream>
using namespace std;
	plane* Inplane(plane &p, ifstream &ifst);
	train* Intrain(train &t, ifstream &ifst);
	transport* In(ifstream &ifst)
	{
		transport* s = new transport;
		int k;
		plane* p;
		train* t;
		ifst >> k;
		switch (k) {
		case 1:
				p = new plane;
				s->obj = (void*)Inplane(*p,ifst);
				s->k = Plane;
				return s;
		case 2:
				t = new train;
				s->k = Train;
				s->obj = (void*)Intrain(*t,ifst);
				return s;
		default:
			return 0;
		}
	}
