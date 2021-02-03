#include<iostream.h>
#include<conio.h>
int area(int h,int b);
int h,b;
float ans;
void main()
{

cout<<"enter height:";
cin>>h;
cout<<"enter base:";
cin>>b;
int r=area(4,5);
cout<<"area of triangle is:"<<r<<endl;
getch();
}
int area(int h,int b)
{
ans=(0.5)*h*b;
return ans;
}