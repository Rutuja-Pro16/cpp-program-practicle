#include<iostream.h>
#include<conio.h>
class Demo
{
private :
static int x;
static int y;
public:
static void hello()
{
cout<<"x"<<x<<endl;
cout<<"y"<<y<<endl;
}

};
int Demo::x=10;
int Demo::y=20;
void main()
{
Demo d1;
d1.hello();
Demo::hello();
getch();
}