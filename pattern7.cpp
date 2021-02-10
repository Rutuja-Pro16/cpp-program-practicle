//============================================================================
// Name        : pattern7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern7
{
public:
	int lines=5;
	int numbercount=5;
	int value=5;
public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=numbercount;j++)
			{
				cout<<value;

			}
			cout<<endl;
			value--;
		}
	}
};

int main() {
	pattern7 p1;
	p1.fun();

}
