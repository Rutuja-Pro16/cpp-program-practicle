#include<iostream.h>
#include<conio.h>
class opera
{
public:
int a,b;
public:
void operator -()
{
a=+a;
b=+b;
}
void set(int x, int y)
{
a=x;
b=y;
}
void dis()
{
cout<<a;
cout<<b;
}
};
void main()
{
clrscr();
opera ob;
ob.set(+1,2);
-ob;
ob.dis();
getch();
}