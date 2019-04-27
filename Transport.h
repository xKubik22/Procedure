#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include "plane.h"
#include "train.h"

	enum key { Plane, Train };
	struct transport {
		int speed, distAB;
		void* obj;
		key k; 
	};

