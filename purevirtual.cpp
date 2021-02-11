//============================================================================
// Name        : purevirtual.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class base
{
	int x;
public:
	//pure virtual function
	  virtual void fun()=0;
	int getX()
	{
		return x;
	}
};
//this class inherits from base
class derived:public base
{
	int y;
public:
	void fun()
	{
		cout<<"fun() called";
	}
};
int main() {
	derived d;
	d.fun();



	return 0;
}
