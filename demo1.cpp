//============================================================================
// Name        : demo1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class demo1 {
public:
	int lines = 3;
	int numbercount = 1;
	int value = 1;
	int spacecount=2;
public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++)
			{
				cout<<" ";

			}
			for (int k = 1; k <= numbercount; k++) {
				cout << value;


			}
			cout << endl;
			value++;
			numbercount++;
			spacecount--;

		}
	}

};

int main() {
	demo1 d1;
	d1.fun();

	return 0;
}
