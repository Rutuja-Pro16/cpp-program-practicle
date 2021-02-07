#include<iostream.h>
#include<conio.h>
class Employee
{
private:
int id,salary;
char name[20];
public:
void accept();
void display();
};
void Employee::accept()
{
cout<<"\n enter the employee name, id and salary";
cin>>name>>id>>salary;
}
void Employee::display()
{
cout<<"\n Name="<<name;
cout<<"\n Id="<<id;
cout<<"\n salary="<<salary;
}
void main()
{
Employee e1,e2,e3;
e1.accept();
e1.display();
e2.accept();
e2.display();
e3.accept();
e3.display();
getch();
}