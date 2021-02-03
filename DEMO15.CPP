#include<iostream.h>
#include<conio.h>
void triangle(int b,int h);
int area,b,h;
void main()
{
triangle(4,6);
getch();
}
void triangle(int b,int h)
{
cout<<"enter base"<<endl;
cin>>b;
cout<<"enter height"<<endl;
cin>>h;
area=0.5*b*h;
cout<<"area of triangle is"<<area<<endl;
}