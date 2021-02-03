#include<iostream.h>
#include<conio.h>
void sphere()
{
int rad1;
float volsp;
cout<<"calculate the volume of sphere:\n";
cout<<"------------------\n";
cout<<"Input the radius of a sphere:";
cin>>rad1;
volsp=(4*3.14*rad1*rad1*rad1)/3;
cout<<"volume of a sphere is:"<<volsp<<endl;
}
void main()
{
sphere();
getch();
}