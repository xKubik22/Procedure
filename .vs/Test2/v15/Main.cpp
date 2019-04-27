// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "container.h"
#include "transport.h"
using namespace std;
void Init(container &c);
void Clear(container &c);
void Incont(container &c, ifstream &ifst);
void Outcont(container &c, ofstream &ofst);

int main(int argc, char* argv[])
{
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	container c;
	Init(c);
	Incont(c,ifst);
	ofst << "Filled container. " << endl;
	Outcont(c, ofst);
	Clear(c);
	ofst << "Empty container. " << endl;
	//Outcont(c, ofst);
	cout << "Stop" << endl;
	return 0;

}

