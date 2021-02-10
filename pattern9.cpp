//============================================================================
// Name        : pattern9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern9
{
public:
	int lines=5;
	int charcount=5;
	char value='E';
public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=charcount;j++)
			{
				cout<<value;

			}
			cout<<endl;
			value--;
		}
	}
};

int main() {
	pattern9 p1;
	p1.fun();

	return 0;
}
