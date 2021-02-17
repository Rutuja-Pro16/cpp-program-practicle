//============================================================================
// Name        : sample17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main()
{
	int lines=4;
	int numbercount=1;
	int value=1;
	int spacecount=3;
	for(int i=1;i<=lines;i++)
	{
		for(int j=1;j<=spacecount;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=numbercount;k++)
		{
			cout<<value;
			value++;

		}
		cout<<endl;
		value=1;
		spacecount--;
		numbercount=numbercount+2;
	}


};
