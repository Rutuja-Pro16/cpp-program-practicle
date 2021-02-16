//============================================================================
// Name        : practice5.cpp
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
	int lines=5;
	int numcount=1;
	int starcount=3;
	int value1=1;
	int value2=5;
public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			cout<<value1;
			for(int j=1;j<=starcount;j++)
			{
				cout<<"*";
			}

			for(int k=1;k<=numcount;k++)
			{

			cout<<value2;
			}

			cout<<endl;
		}
	}

};

int main() {
	demo d1;
	d1.fun();

	return 0;
}
