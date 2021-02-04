#include<iostream.h>
#include<conio.h>
int vcub(int l,int b, int h)
{
int v=l*b*h;
return(v);
}
void main()
{
int l,b,h;
cout<<"enter l value:"<<endl;
cin>>l;
cout<<"enter b value:"<<endl;
cin>>b;
cout<<"enter h value:"<<endl;
cin>>h;
int z=vcub(l,b,h);
cout<<"volume of cuboid:"<<z<<endl;
getch();
}