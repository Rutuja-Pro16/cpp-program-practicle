#include<iostream.h>
#include<conio.h>
void fun1();
int fun2();
void fun3(int a,int b);
int fun4(int a,int b);


class demo
{
public:
int x,y;
void fun1()
{
cout<<"its simple function defination"<<endl;
}
int fun2()
{
int c=100;
return c;
}
void fun3(int a,int b)
{
int c;
c=a+b;
cout<<"addition:"<<c<<endl;

}
int fun4(int a,int b)
{
int c;
c=a+b;
return c;
}
};
void main()
{
demo d1;
d1.fun1();
int  x=d1.fun2();
cout<<"return value:"<<x<<endl;
d1.fun3(10,12);
int y=d1.fun4(100,200);
cout<<"addition:"<<y<<endl;
getch();
}
