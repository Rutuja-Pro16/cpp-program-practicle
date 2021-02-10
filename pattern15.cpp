//============================================================================
// Name        : pattern15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern15
{
public:
	int lines=5;
	int starcount=5;

public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=starcount;j++)
			{
				cout<<"*";



			}
			cout<<endl;
			starcount--;
		}
	}

};

int main() {
	pattern15 p1;
	p1.fun();
	return 0;
}
