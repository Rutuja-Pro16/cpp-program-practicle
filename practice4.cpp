//============================================================================
// Name        : practice4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class test1
{
public:
	int lines=5;
	int value=1;
	int numcount=1;
	int spacecount=2;
	int mid=(lines+1)/2;
public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=spacecount;j++)
			{
				cout<<" ";
			}
			for(int k=1;k<=numcount;k++)
			{
				cout<<value;
			}

			value++;
			if(i<mid)
			{
				spacecount--;
				numcount++;


			}
			else
			{
				spacecount++;
				numcount--;
			}
	        cout<<endl;

		}
	}
};

int main() {
	test1 t1;
	t1.fun();

	return 0;
}
