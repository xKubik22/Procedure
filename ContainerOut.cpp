#include <iostream>
#include <fstream>

#include "Container.h"
#include "Transport.h"

void Out(transport &t, ofstream &ofst);

void Outcont(container &c, ofstream &ofst)
{
	ofst << "Container contains " << c.count << " elements." << endl;
	list* k = c.head;
	for (int i = 0; i < c.count; i++)
	{
		ofst << i + 1 << ": ";
		Out(*k->data, ofst);
		k = k->next;
	}
}
void Out_Ship(container &c, ofstream &ofst)
{
	list* k = c.head;
	ofst << "Only ships." << endl;
	for (int i = 0; i < c.count; i++)
	{
		if (k->data->k == key::Ship)
		{
			ofst << i + 1 << ": ";
			Out(*k->data, ofst);
		}
		else 
		{
			ofst << endl;
		}
		k = k->next;
	}
}
