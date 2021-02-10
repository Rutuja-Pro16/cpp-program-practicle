//============================================================================
// Name        : pattern14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class pattern14
{
public:
	int lines=4;
	int charcount=1;
	char value='A';
public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=charcount;j++)
			{
				cout<<value;
				value++;
			}
			cout<<endl;

            charcount++;
            value='A';

		}

	}

};

int main() {
	pattern14 p1;
	p1.fun();

}
