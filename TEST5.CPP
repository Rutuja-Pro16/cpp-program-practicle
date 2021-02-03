#include<iostream.h>
#include<conio.h>
int rectangle(int l,int b);

void main()
{
int l,b,area;
int r=rectangle(5,3);
cout<<"\n area of rectangle is:"<<r<<endl;
getch();
}
int rectangle(int l,int b)
{
int area=l*b;
return area;
}