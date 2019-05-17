#include <iostream>
#include <fstream>

#include "Container.h"
#include "Transport.h"

using namespace std;

double Time(Transport &t);

void Init(Container &c)
{
	c.head = NULL;
	c.count = 0;
}

bool Compare(Transport *first, Transport * second)
{
	if (first != NULL && second != NULL)
	{
		return Time(*first) > Time(*second);
	}
}

void Sort(Container &c) 
{
	List* a, *b, *p, *h = NULL;
	for (List* i = c.head; i != NULL; )
	{
		a = i;
		i = i->next;
		b = h;
		for (p = NULL; (b != NULL) && Compare(a->data, b->data); )
		{
			p = b;
			b = b->next;
		}
		if (p == NULL)
		{
			a->next = h;
			h = a;
		}
		else
		{
			a->next = b;
			p->next = a;
		}
	}
	if (h != NULL)
		c.head = h;
}

void Clear(Container &c)
{
	while (c.count != 0)
	{
		List* k = c.head;
		c.head = c.head->next;
		delete k;
		c.count--;
	}
	delete c.head;
}

