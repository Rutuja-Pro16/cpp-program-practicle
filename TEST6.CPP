#include<iostream.h>
#include<conio.h>
int vcube(int a)
{
int v=a*a*a;
return(v);
}
void main()
{
int a;
cout<<"enter the value of a:"<<endl;
cin>>a;
int z=vcube(a);
cout<<"volume of a cube is:"<<z<<endl;
getch();
}