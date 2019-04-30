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
		void* obj;
		key k; 
	};

