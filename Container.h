#pragma once
#include <iostream>
#include <fstream>

//namespace simple_shapes{
	
	struct transport;
	struct list;
	struct container
	{
		list* head;
		int count;
	};
	struct list
	{
		transport* data=NULL;
		list* next=NULL;//Указатель на след.элемент
		
	};


//}