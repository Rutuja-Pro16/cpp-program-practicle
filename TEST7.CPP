#include<iostream.h>
#include<conio.h>
int triangle(int l,int b,int h)
{
int v=0.5*l*b*h;
return(v);
}
void main()
{
int l,b,h;
cout<<"enter the value of l:"<<endl;
cin>>l;
cout<<"enter value of b:"<<endl;
cin>>b;
cout<<"enter value of h:"<<endl;
cin>>h;
int z=triangle(l,b,h);
cout<<"volume of triangle:"<<z<<endl;
getch();
}