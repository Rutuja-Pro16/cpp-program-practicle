#include<iostream.h>
#include<conio.h>
void fun(int &x,int &y);
void fun(int &x,int &y)
{
x=12;
y=14;
}
void main()
{
int a=2;
int b=4;
cout<<a<<""<<b<<endl;
fun(a,b);
cout<<a<<""<<b<<endl;
getch();
}