#include<iostream.h>
#include<conio.h>
class one
{
public:
int a,b;
public:
void set(int x,int y);
one add(one cob2);
void disres();
};
void one::set(int x,int y)
{
a=x;
b=y;
}
one one::add(one cob2)
{
one tob;
tob.a=a+cob2.a;
tob.b=b+cob2.b;
return(tob);
}
void one::disres()
{
cout<<a<<b<<endl;
}
void main()
{
clrscr();
one ob1,ob2,ob3;
ob1.set(3,5);
ob2.set(2,1);
ob1.disres();
ob3=ob1.add(ob2);
ob3.disres();
getch();
}
