#pragma once
#include <iostream>
#include <fstream>

using namespace std;

enum type{Lainer, Tanker, Tug};
struct Ship
{
	int water; // ���������
	type typeship; // ���������
};
