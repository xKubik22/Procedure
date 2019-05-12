#include <iostream>

#include "Container.h"
#include "Transport.h"

using namespace std;

void Init(container &c);
void Clear(container &c);
void Incont(container &c, ifstream &ifst);
void Outcont(container &c, ofstream &ofst);
void Sort(container &c);
void Out_Ship(container &c, ofstream &ofst);

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
	container c;
	Init(c);
	Incont(c,ifst);
	ofst << "Filled container. " << endl;
	Outcont(c, ofst);
	Sort(c);
	Outcont(c, ofst);
	Out_Ship(c, ofst);
	Clear(c);
	ofst << "Empty container. " << endl;
	cout << "Stop" << endl;
	return 0;
}
