#include<iostream.h>
#include<conio.h>
class sample
{
int x,sum;
public:
void getdata(int temp)
{
x=temp;
}
void display()
{
cout<<"\n Sum="<<sum;
}
void add(sample s1,sample s2)
{
sum=s1.x+s2.x;
}
};
void main()
{
sample obj1,obj2,obj3;
obj1.getdata(25);
obj2.getdata(30);
obj3.add(obj1,obj2);
obj3.display();
getch();
}