#pragma once
#include <iostream>
#include <fstream>

#include "Plane.h"
#include "Train.h"
#include "Ship.h"

using namespace std;
	
enum key { Plane, Train, Ship };
struct transport 
{
	int speed, distAB; // параметры
	float mass; // параметры
	void* obj;
	key k; // ключ
};