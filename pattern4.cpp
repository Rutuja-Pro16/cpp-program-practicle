//============================================================================
// Name        : pattern4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern4
{
public:
	int lines=3;
	int numbercount=5;
	int num=1;
public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=numbercount;j++)
			{
				cout<<num;
                 num++;
			}

			cout<<endl;
			num=1;


		}
	}
};

int main() {
	pattern4 p1;
	p1.fun();

	return 0;
}
