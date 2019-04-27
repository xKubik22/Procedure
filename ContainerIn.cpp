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
/*}
void Incont(container &c, ifstream &ifst)
	{
		while(!ifst.eof()){
			list *ne = new list;  //новый элемент списка
			ne->data = In(ifst);
			//Out(*ne->data);
			list* current = c.head;
			if (c.count != 0)
			{
				for (int i = 0; i < c.count; i++)
				{
					current = current->next;
				}
				current->next = ne;

			}
			else
			{
				c.head = ne;
				c.count++;
			}
		}
	}
*/