//============================================================================
// Name        : sample14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class demo14 {
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
			value=value+1;
			charcount++;
			spacecount--;

		}
	}

};

int main() {
	demo14 d;
	d.fun();

	return 0;
}




