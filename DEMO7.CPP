#include<iostream.h>
#include<conio.h>
void area();
void area()
{
int area,side;
cout<<"enter the side of square:";
cin>>side;
area=side*side;
cout<<"area of square:"<<area<<endl;
}
void main()
{
area();
getch();
}