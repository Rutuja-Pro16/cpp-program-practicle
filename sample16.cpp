//============================================================================
// Name        : sample16.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class demo16 {
public:
	int lines = 4;
	int numbercount = 1;
	int spacecount = 2;
	int value = 1;

public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++) {
				cout << "  ";

			}
			for (int k = 1; k <= numbercount; k++) {
				cout <<  value << "  ";
				value++;


			}

			cout << endl;
			value=1;
			numbercount = numbercount+2;
			spacecount--;

		}
	}

};

int main() {
	demo16 d;
	d.fun();

	return 0;
}

