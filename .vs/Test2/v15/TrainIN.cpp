#include <fstream>
#include <iostream>
#include "train.h"
using namespace std;

	train* Intrain(train &t, ifstream &ifst)
	{
		
		ifst >> t.quant;
		return &t;
	}





