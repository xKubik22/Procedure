#pragma once
#include <iostream>
#include <fstream>

using namespace std;

enum type{Lainer, Tanker, Tug};
struct Ship
{
	int water; // параметры
	type typeship; // параметры
};
