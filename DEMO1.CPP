#include<iostream.h>
#include<conio.h>
void fun();
float r,area_circle;

void main()
{
cout<<"enter radius of circle";
cin>>r;
fun();
}
void fun()
{
area_circle=3.14*r*r;
cout<<"Area of circle:"<<area_circle<<endl;
}
