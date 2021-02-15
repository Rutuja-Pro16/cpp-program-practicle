//============================================================================
// Name        : Practice1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class demo1
{
public:
	int lines=5;
	int charcount=1;
	char value='A';
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
			for(int k=1;k<=charcount;k++)
			{
				cout<<value;
			}
			cout<<endl;
			if(i<mid)
			{
				spacecount--;
				charcount=charcount+2;
			}
			else
			{
				spacecount++;
								charcount=charcount-2;

			}
		}

	}

};

int main() {
	demo1 d1;
	d1.fun();


	return 0;
}
