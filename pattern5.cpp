//============================================================================
// Name        : pattern5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern5
{
public:
	int charcount=5;
	int lines=4;
	char value='A';
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
			value++;

		}
	}
};

int main() {
	pattern5 p1;
	p1.fun();
}
