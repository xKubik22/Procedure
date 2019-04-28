#include <iostream>
#include <fstream>
#include "Container.h"
#include "transport.h"

using namespace std;

//namespace simple_shapes { 
transport* In(ifstream &ifst);
	void Incont(container &c, ifstream &ifst)
	{
		list* current = c.head;
		list* head = new list;
		while(!ifst.eof()){
			  //новый элемент списка
			if (c.count == 0)
			{
				head->data = In(ifst);
				head->next = NULL;
				c.count++;
				current = head;
				c.head = head;
			}
			else
			{
				current->next = new list;
				current = current->next;
				current->data = In(ifst);
				current->next = NULL;
				c.count++;
			}
		}
	}

