//============================================================================
// Name        : sample15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class demo15 {
public:
	int lines = 4;
	int charcount = 1;
	int spacecount=3;
	char value='A';



public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++){
				cout<<"  ";

			}
			for (int k = 1; k <= charcount; k++) {
				cout <<  value<<"  ";

			}


			cout << endl;
			value=value+2;
			charcount++;
			spacecount--;

		}
	}

};

int main() {
	demo15 d;
	d.fun();

	return 0;
}




