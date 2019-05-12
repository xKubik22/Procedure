#include <fstream>
#include <iostream>

#include "Train.h"

using namespace std;

string FileRead(ifstream &ifst);

train* Intrain(train &t, ifstream &ifst)
{
	t.quant = stoi(FileRead(ifst));
	return &t;
}
