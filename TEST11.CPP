#include<iostream.h>
#include<conio.h>
int circle(int r)
{
int area=3.14*r*r;
return area;
}
void main()
{
int area,r;
cout<<"enter radius of circle:";
cin>>r;
int p=circle(r);
cout<<"area of circle is:"<<p<<endl;
getch();
}
