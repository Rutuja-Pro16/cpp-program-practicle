#include<iostream.h>
#include<conio.h>
class abc;
class xyz
{
int x;
public:
void getvalue(int y)
{
x=y;

}

friend void max(xyz,abc);

};
class abc
{
int a;
public:
void getvalue(int b)
{
a=b;
}
friend void max(xyz,abc);
};
void max(xyz obj1,abc obj2)
{
if(obj1.x>obj2.a)

cout<<obj1.x;

else

cout<<obj2.a;

}
void main()
{
xyz obj1;
obj1.getvalue(20);
abc obj2;
obj2.getvalue(50);
max(obj1,obj2);
getch();
}
