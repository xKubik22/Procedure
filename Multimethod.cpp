#include <iostream>
#include <fstream>

#include "Container.h"
#include "Transport.h"

void Out(Transport &t, ofstream &ofst);

void MultiMethod(Container &c, ofstream &ofst) 
{
	ofst << "Multimethod." << endl;
	List* current_i = c.head;
	for (int i = 0; i < c.count; i++) 
	{
		List* current_j = current_i->next;
		for (int j = i + 1; j < c.count; j++) 
		{
			switch (current_i->data->k) 
			{
			case Plane:
				switch (current_j->data->k) 
				{
				case Plane:
					ofst << "Plane and Plane." << endl;
					break;
				case Train:
					ofst << "Plane and Train" << endl;
					break;
				case Ship:
					ofst << "Plane and Ship" << endl;
					break;
				default:
					ofst << "Unknown type" << endl;
				}
				break;
			case Train:
				switch (current_j->data->k)
				{
				case Plane:
					ofst << "Train and Plane." << endl;
					break;
				case Train:
					ofst << "Train and Train" << endl;
					break;
				case Ship:
					ofst << "Train and Ship" << endl;
					break;
				default:
					ofst << "Unknown type" << endl;
				}
				break;
			case Ship:
				switch (current_j->data->k) 
				{
				case Plane:
					ofst << "Ship and Plane." << endl;
					break;
				case Train:
					ofst << "Ship and Train" << endl;
					break;
				case Ship:
					ofst << "Ship and Ship" << endl;
					break;
				default:
					ofst << "Unknown type" << endl;
				}
				break;
			default:
				ofst << "Unknown type" << endl;
			}
			Out(*(current_i->data), ofst);
			Out(*(current_j->data), ofst);
			current_j = current_j->next;
		}
		current_i = current_i->next;
	}
}