//============================================================================
// Name        : demo2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class demo2 {
public:
	int lines = 3;
	int starcount = 1;
	char value='*';

	int spacecount=2;
public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++)
			{
				cout<<" ";

			}
			for (int k = 1; k <= starcount; k++) {
				cout << "*";


			}
			cout << endl;
		value++;
			starcount++;
			spacecount--;

		}
	}

};

int main() {
	demo2 d2;
	d2.fun();

	return 0;
}
