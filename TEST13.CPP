#include<iostream.h>
#include<conio.h>
int sphere(int r);
void main()
{
int r,v;
cout<<"enter radius of sphere:";
cin>>r;
int p=sphere(r);
cout<<"volume of sphere is:"<<p<<endl;
getch();
}
int sphere(int r)
{
 int v=4*3.14*r*r*r/3;
 return v;
 }
