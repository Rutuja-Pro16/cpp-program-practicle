//============================================================================
// Name        : withvirtual.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class demo
{
public:
	virtual void dis()
	{
		cout<<"class demo";
	}
};
class demo2:public demo
{
public:
	void dis()
	{
		cout<<"class demo2";

	}
};


int main() {
	demo d1,*d1pt;
	d1pt=&d1;
	d1pt->dis();
	demo2 d2;
	d1pt=&d2;
	d1pt->dis();


	return 0;
}
