#include<iostream.h>
#include<conio.h>
class Account
{
public:
float  salary;

};
class programmer:public Account
{
public:
float  bonus;
};
void main()
{
float salary;
float bonus;
programmer p1;
cout<<"salary:";
cin>>salary;
cout<<"bonus:";
cin>>bonus;
cout<<p1.salary<<endl;
cout<<p1.bonus<<endl;
getch();
}