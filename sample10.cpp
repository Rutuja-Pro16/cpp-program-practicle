//============================================================================
// Name        : sample10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class demo10 {
public:
	int lines = 5;
	int charcount = 5;
	char value ='E';
	int spacecount = 1;

public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= spacecount; j++) {
				cout << " ";
			}

			for (int k = 1; k <= charcount; k++) {
				cout << value;


			}
			cout << endl;
			value--;



			spacecount++;


			charcount--;

		}
	}

};

int main() {
	demo10 d1;
	d1.fun();

	return 0;
}



