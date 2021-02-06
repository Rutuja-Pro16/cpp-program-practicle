#include<iostream.h>
#include<conio.h>
class Demo
{
public:
int part;
Demo(int x)
{
part=x;
}
};
void main()
{
Demo d1(10);
Demo d2(20);
Demo d3(30);
cout<<d1.part<<endl;
cout<<d2.part<<endl;
cout<<d3.part<<endl;
getch();
}
