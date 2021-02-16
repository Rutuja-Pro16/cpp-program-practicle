//============================================================================
// Name        : sample5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class demo5{
public:
	int lines = 5;
	int charcount = 5;
	char value = 'A';

public:
	void fun() {
		for (int i = 1; i <= lines; i++) {

			for (int j = 1; j <= charcount; j++) {
				cout <<value;
				value++;




			}
			cout << endl;
			value='A';

			charcount--;






		}
	}

};

int main() {
	demo5 d5;
	d5.fun();

	return 0;
}

