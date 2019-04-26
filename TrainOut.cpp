#include <fstream>
#include <iostream>
#include "train.h"
using namespace std;

void Outtrain(train* t, ofstream &ofst)
{
	ofst << "It is train" << endl << "quantity = " << t->quant << endl << "speed = " << t->speed << endl << "distance point to point = " << t->distAB << endl;
}