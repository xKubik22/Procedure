#pragma once
#include <iostream>
#include <fstream>

#include "Plane.h"
#include "Train.h"
#include "Ship.h"

using namespace std;
	
enum key { Plane, Train, Ship };
struct Transport 
{
	int speed, distAB; // ���������
	float mass; // ���������
	void* obj;
	key k; // ����
};