#include<iostream.h>
#include<conio.h>
class one
{
public:
void dis()
{
cout<<"one";
}
};
class Two:public one
{
public:
void dis()
{
one::dis();
cout<<"two";
}
};
void main()
{
Two t1;
t1.dis();
getch();
}