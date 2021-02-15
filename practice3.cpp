//============================================================================
// Name        : practice3.cpp
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
	int starcount = 5;
	int spacecount=0;
public:

	void fun()
	{
		for (int i = 1; i <= line; i++)
		{
			for (int j = 1; j <= spacecount; j++)
			{
				cout << " ";

			}
			for (int k = 1; k <= starcount; k++)
						{
							cout << " *";

						}

			cout<<endl;
			starcount--;
			spacecount++;


		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}

