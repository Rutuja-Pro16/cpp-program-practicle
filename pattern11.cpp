//============================================================================
// Name        : pattern11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class pattern11
{
public:
	int lines=4;
	int starcount=1;
	void fun()
	{
	for(int i=1;i<=lines;i++)
	{
		for(int j=1;j<=starcount;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		starcount++;
	}
	}
};
int main()
{
	pattern11 p1;
	p1.fun();
}

