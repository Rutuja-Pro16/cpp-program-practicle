#include<iostream.h>
#include<conio.h>
class Myclass
{
int a;
public:
Myclass()
{
cout<<"enter no:";
cin>>a;
}
void display()
{
cout<<a;
}
};
void main()
{
Myclass ob1,ob2,ob3;
ob1.display();
ob2.display();
ob3.display();
getch();
}