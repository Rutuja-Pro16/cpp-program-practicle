//============================================================================
// Name        : pattern13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class pattern13
{
	public:
		int lines=4;
		int numbercount=1;
		int value=1;
		void fun()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=numbercount;j++)
				{
					cout<<value;

				}
				cout<<endl;
				value++;
				numbercount++;



			}
		}
	};

	int main() {
		pattern13 p1;
		p1.fun();
		return 0;

	}
