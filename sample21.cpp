//============================================================================
// Name        : sample21.cpp
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
	int charcount=7;
	char value='A';
	int spacecount=1;
	for(int i=1;i<=lines;i++)
	{
		for(int j=1;j<=spacecount;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=charcount;k++)
		{
			cout<<value;
			value++;

		}
		cout<<endl;
		value='A';
		spacecount++;
		charcount=charcount-2;
	}


}
