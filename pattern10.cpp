//============================================================================
// Name        : pattern10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern10
{
public:
	int lines=4;
	int charcount=5;
	char value='E';
public:
	void fun()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=charcount;j++)
			{
				cout<<value;
				value--;
			}
			cout<<endl;
			value='E';
		}

	}

};

int main() {
	pattern10 p1;
	p1.fun();

}
