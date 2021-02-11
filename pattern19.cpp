//============================================================================
// Name        : pattern19.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class demo
{
public:
	int lines=3;
	int charcount=4;
	char value1='A';
	char value2='a';
public:
	void fun()
	{
	for(int i=1;i<=lines;i++)
	{
		cout<<value1;
		for(int j=1;j<=charcount;j++)
		{
			cout<<value2;
		}
		cout<<endl;
		value1++;
		value2++;
	}
	}
};

int main() {
	demo d1;
	d1.fun();

	return 0;
}
