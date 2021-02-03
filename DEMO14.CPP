#include<iostream.h>
#include<conio.h>
void surface_cylinder(int b,int h,int r)
{
int s;
s=2*3.14*r*(r+h);
cout<<"surface of cylinder is:"<<s<<endl;
}
void main()
{
surface_cylinder(5,5,5);
getch();
}