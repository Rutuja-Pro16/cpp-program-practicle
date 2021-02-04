#include<iostream.h>
#include<conio.h>
int mul(int x,int y);
void main()
{
int a=2,b=3;
int r=mul(a,b);
cout<<r;
getch();
}
int mul(int x, int y)
{
int c=x*y;
return c;
}