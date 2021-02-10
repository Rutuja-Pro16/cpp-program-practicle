//============================================================================
// Name        : pattern1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern1
{
public:
	int lines=3;
	int starcount=5;
	void fun()
	{
	for(int i=1;i<=lines;i++)
	{
		for(int j=1;j<=starcount;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	}
};
int main()
{
	pattern1 p1;
	p1.fun();
}



