//============================================================================
// Name        : sample7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class demo7 {
public:
	int lines = 5;
	int numbercount = 5;
	int value =1;
	int spacecount = 1;

public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++) {
				cout << " ";
			}

			for (int k = 1; k <= numbercount; k++) {
				cout << value;
				value++;

			}
			cout << endl;
			value=1;

			spacecount++;


			numbercount--;

		}
	}

};

int main() {
	demo7 d7;
	d7.fun();

	return 0;
}



