//============================================================================
// Name        : pattern3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern3 {
public:
	int lines = 4;
	int numbercount = 4;
	int num = 1;

public:
	void fun() {
		for (int i = 1; i <= lines; i++) {
			for (int j = 1; j <= numbercount; j++) {
				cout << num;
			}
			cout << endl;
			num++;
		}

	}
};

int main() {

	pattern3 p1;
	p1.fun();

}
