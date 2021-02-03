#include<iostream.h>
#include<conio.h>
int sub(int x,int y);
void main()
{
int a=4,b=2;
int r=sub(a,b);
cout<<r;
getch();
}
int sub(int x,int y)
{
int z=x-y;
return(z);
}
