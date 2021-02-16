//============================================================================
// Name        : sample11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class demo11 {
public:
	int lines = 4;
	int starcount = 1;
	int spacecount=3;



public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++){
				cout<<"  ";

			}
			for (int k = 1; k <= starcount; k++) {
				cout <<" * ";
			}


			cout << endl;
			starcount++;
			spacecount--;

		}
	}

};

int main() {
	demo11 d1;
	d1.fun();

	return 0;
}



