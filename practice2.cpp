//============================================================================
// Name        : practice2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int numcount = 5;
	int value = 1;
public:

	void fun()
	{
		for (int i = 1; i <= line; i++)
		{
			for (int j = 1; j <= numcount; j++)
			{
				cout << value;

			}
			cout<<endl;

		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
