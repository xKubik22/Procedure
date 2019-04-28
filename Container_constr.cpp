#include <iostream>
#include <fstream>
#include "Container.h"
#include "transport.h"

using namespace std;

//namespace simple_shapes {
	void Init(container &c)
	{
		c.head = NULL;
		c.count = 0;
	}

	void Clear(container &c)
	{
		
		while(c.count != 0)
		{
			list* k = c.head;
			c.head = c.head->next;
			delete k;
			c.count--;
		}
		delete c.head;
		
	}
//}
