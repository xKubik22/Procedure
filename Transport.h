#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include "plane.h"
#include "train.h"
#include "Ship.h"

	enum key { Plane, Train, Ship };
	struct transport {
		int speed, distAB;
		float mass;
		void* obj;
		key k; 
	};

