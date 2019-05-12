#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string FileRead(ifstream &ifst)
{
	string workstr = "";
	bool Number = true; 
	ifst >> workstr;
	if (workstr != "")
	{
		for (int i = 0; i < workstr.length();i++)
		{
			if (!isdigit(workstr[i]))
			{
				Number = false;
				break;
			}
		}
	}
	else
	{
		Number = false;
	}
	if (Number)
	{
		 return workstr;
	}
	else
	{
		cout << "Uncorrected symbols in file: Filein.txt";
		exit(0);
	}
}