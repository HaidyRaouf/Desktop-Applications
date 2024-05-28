#include <iostream>
#include <tchar.h>
#include <fstream>
#include <string>
using namespace std;

int main() {
	{
		fstream myFile;
		myFile.open("haidy.txt",ios::in);
		string line;
		if (myFile.is_open()) {
							while (getline(myFile,line))
							{
											 cout<<line<<endl;
							}
							myFile.close();
		}
	}	return 0;
}


