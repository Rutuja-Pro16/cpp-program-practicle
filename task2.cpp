//============================================================================
// Name        : task2.cpp
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
int lines=4;
int numcount=5;
int value=1;
public:

void fun()
{
	for(int i=1;i<=lines;i++)
	{
		for(int j=1;j<=numcount;j++)
		{
			if(i==2||i==4)
			{
				cout<<value;
				value++;
			}
		}
		if(i==1||i==3)
		{
			cout<<"AbcDe";
		}
		cout<<endl;
		value=1;
	}
}
};
int main()
{
	demo d1;
	d1.fun();

	return 0;
}



