#include<iostream.h>
#include<conio.h>
int area,side;
void square(int area,int side)
{

clrscr();
cout<<"enter the side of square:";
cin>>side;
area=side*side;
cout<<"area of square:"<<area<<endl;
}
void main()
{
square(10,5);
getch();
}