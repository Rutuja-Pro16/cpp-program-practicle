//============================================================================
// Name        : sample23.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int lines = 4;
	int numbercount = 7;
	int value = 7;
	int spacecount = 1;
	for (int i = 1; i <= lines; i++) {
		for (int j = 1; j <= spacecount; j++) {
			cout << " ";
		}
		for (int k = 1; k <= numbercount; k++) {
			cout << value;



		}
		cout << endl;
		value = value-2;
		spacecount++;
		numbercount = numbercount - 2;
	}
}

