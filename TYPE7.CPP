#include<iostream.h>
#include<conio.h>
class A
{
public:
A()
{
cout<<"constructor of A class"<<endl;
}
};
class B:public A
{
public:
B()
{
cout<<"constructor of B class"<<endl;
}
};
void main()
{
clrscr();
//create obj of class B
B obj;
getch();
}
