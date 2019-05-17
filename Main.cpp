#include <iostream>

#include "Container.h"
#include "Transport.h"

using namespace std;

void Init(Container &c);
void Clear(Container &c);
void Incont(Container &c, ifstream &ifst);
void Outcont(Container &c, ofstream &ofst);
void Sort(Container &c);
void Out_Ship(Container &c, ofstream &ofst);
void MultiMethod(Container &c, ofstream &ofst);

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	if (!ifst || !ofst)
	{
		cout << "No files were found!" << endl;
		return 0;
	}
	cout << "Start" << endl;
	Container c;
	Init(c);
	Incont(c,ifst);
	ofst << "Filled Container. " << endl;
	Outcont(c, ofst);
	MultiMethod(c, ofst);
	Sort(c);
	Outcont(c, ofst);
	Out_Ship(c, ofst);
	Clear(c);
	ofst << "Empty Container. " << endl;
	cout << "Stop" << endl;
	return 0;
}
