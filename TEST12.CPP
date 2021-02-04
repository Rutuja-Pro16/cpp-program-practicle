#include<iostream.h>
#include<conio.h>
float cylvol(float r,float h)
{
float v=3.14*r*r*h;
return v;
}
void main()
{
int r,h;
cout<<"enter radius of cylinder:"<<endl;
cin>>r;
cout<<"enter height of cylinder:"<<endl;
cin>>h;
float z=cylvol(r,h);
cout<<"volume of cylinder:"<<z<<endl;
getch();
}