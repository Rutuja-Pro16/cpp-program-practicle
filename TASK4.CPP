#include<iostream.h>
#include<conio.h>
class sample
{
public:
int a,b;
void set(int x,int y);
void add(sample &cob2);
void disres();
};
void sample::set(int x,int y)
{
a=x;
b=y;
}
void sample::add(sample &cob2)
{
cob2.a=12;
cob2.b=13;

}
void sample::disres()
{
cout<<a<<b<<endl;
}
void main()
{
sample ob1;
ob1.set(2,3);
ob1.disres();
ob1.add(ob1);
ob1.disres();
getch();
}