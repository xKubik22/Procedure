#include <fstream>
#include <iostream>
#include <string>

#include "Train.h"

using namespace std;

string FileRead(ifstream &ifst);

Train* InTrain(Train &t, ifstream &ifst)
{
	t.quant = stoi(FileRead(ifst));
	return &t;
}
