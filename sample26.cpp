//============================================================================
// Name        : sample26.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int lines = 7;
	int starcount = 1;
	int mid = (lines + 1) / 2;

	for (int i = 1; i <= lines; i++) {
		for (int j = 1; j <= starcount; j++) {
			cout << "*";

		}


		if (i<mid) {

			starcount++;

		} else {
			starcount--;
		}

cout<<endl;
	}

}
