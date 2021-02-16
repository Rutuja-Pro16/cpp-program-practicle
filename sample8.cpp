//============================================================================
// Name        : sample8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class demo8 {
public:
	int lines = 5;
	int numbercount = 5;
	int value =5;
	int spacecount = 1;

public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++) {
				cout << " ";
			}

			for (int k = 1; k <= numbercount; k++) {
				cout << value;


			}
			cout << endl;
			value--;



			spacecount++;


			numbercount--;

		}
	}

};

int main() {
	demo8 d8;
	d8.fun();

	return 0;
}



