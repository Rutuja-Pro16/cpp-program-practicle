#include<iostream.h>
#include<conio.h>
//base class (parent)
class Myclass
{
public:
void myfunction()
{
cout<<"my grandfather property is:";
}
};
//derived class (child)
class Mychild:public Myclass
{
public:
void fun2()
{
cout<<"my father property is:";
}
};
//derived class (grandchild)
class Mygrandchild:public Mychild
{
public:
void fun3()
{
cout<<"my property is:";
}
};
void main()
{
Mygrandchild m1;
m1.myfunction();
m1.fun2();
m1.fun3();
getch();
}

