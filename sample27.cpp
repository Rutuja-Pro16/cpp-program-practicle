//============================================================================
// Name        : sample27.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int lines=7;
	int numbercount=1;
	int value=3;
	int mid=(lines+1)/2;
	for(int i=1;i<=lines;i++)
	{
		for(int j=1;j<=numbercount;j++)
		{
			cout<<value;
			value--;


		}
		cout<<endl;
		if(i<mid)
		{

			numbercount++;
		}
		else
		{

			numbercount--;
		}
		value=3;

	}
}
