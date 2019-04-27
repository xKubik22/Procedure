#pragma once
#include <iostream>
#include <fstream>
using namespace std;
enum type{Lainer, Tanker, Tug};
struct ship {
	int water; // параметры
	type typeship;
};
