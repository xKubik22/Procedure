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
	//void Adds(container &c)
	//{
	//	list *Addelem = new list;
	//	Addelem->data = NULL; //внести данные
	//	Addelem->next = c.head;
	//	c.head = Addelem;
	//	c.count++;
	//	c.head->next = NULL;
	//}

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
