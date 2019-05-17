#include <fstream>
#include <iostream>

#include "Train.h"

using namespace std;

void OutTrain(Train* t, ofstream &ofst)
{
	ofst << "It is Train" << endl << "quantity = " << t->quant << endl;
}