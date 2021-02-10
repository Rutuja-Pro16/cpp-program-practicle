//============================================================================
// Name        : Binary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class binary {
public:

	string name1, name2;
	void set(string x, string y) {
		name1 = x;
		name2 = y;
	}
	void operator +(binary cb2) {
		string name3 = name1 + cb2.name1;
		string name4 = name1 + cb2.name1;
		cout << name3 << name4;
	}
	void dis() {
		cout << name1 << name2;
	}

};
int main() {
	binary b1,b2;
	b1.set("ram", "sham");
	b2.set("changu","mangu");
	b1.dis();
	b2.dis();
	return 0;
}
