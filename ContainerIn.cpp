#include <iostream>
#include <fstream>

#include "Container.h"
#include "Transport.h"

using namespace std;
 
Transport* In(ifstream &ifst);

void Incont(Container &c, ifstream &ifst)
{
	List* current = c.head;
	List* head = new List;
	while (!ifst.eof())
	{
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
			current->next = new List;
			current = current->next;
			current->data = In(ifst);
			current->next = NULL;
			c.count++;
		}
	}
}

