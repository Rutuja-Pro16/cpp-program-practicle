#include<iostream.h>
#include<conio.h>
void triangle();
int height,base,result;


void triangle()
{
  result=(0.5)*height*base;
  cout<<"area of triangle is:"<<result<<endl;

}
void main()
{
cout<<"enter height and base";
cin>>height>>base;
triangle();
getch();
}


