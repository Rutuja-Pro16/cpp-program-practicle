#include<iostream.h>
#include<conio.h>
int l,b,area;
void rectangle(int l,int b)
{
clrscr();
int area;
area=l*b;
cout<<"area of rectangle is:"<<area<<endl;
getch();
}
void main()
{
rectangle(10,5);
}