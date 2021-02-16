//============================================================================
// Name        : sample13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class demo13 {
public:
	int lines = 4;
	int numbercount = 1;
	int spacecount=3;
	int value=1;



public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++){
				cout<<"  ";

			}
			for (int k = 1; k <= numbercount; k++) {
				cout <<  value<<"  ";

			}


			cout << endl;
			value=value+2;
			numbercount++;
			spacecount--;

		}
	}

};

int main() {
	demo13 d3;
	d3.fun();

	return 0;
}



