//============================================================================
// Name        : pattern17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern17
{
public:
	int lines=5;
	int numbercount=5;
	int value=1;
public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=numbercount;j++)
			{
				cout<<value;
				value++;
			}
			cout<<endl;
			numbercount--;
			value=1;
		}
	}
};

int main() {
	pattern17 p1;
	p1.fun();

	return 0;
}
