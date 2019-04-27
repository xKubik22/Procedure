#include <iostream>
#include <fstream>
#include "Container.h"
#include "transport.h"


//namespace simple_shapes {

	// Сигнатуры требуемых внешних функций
	void Out(transport &t,ofstream &ofst);
	// Вывод содержимого контейнера в указанный поток

	void Outcont(container &c, ofstream &ofst)
	{
		ofst<< "Container contains " <<c.count<< " elements." << endl;
		list *k = c.head;
		for (int i = 0; i <c.count; i++)
		{
			ofst << i+1 << ": ";
			Out(*k->data, ofst);
			//cout << k->data << "EQW";
			k = k->next;
		
		}
	}
	
//} 
