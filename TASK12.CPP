#include<iostream.h>
#include<conio.h>

class Demo
{
public:
int number;
public:
int add (int number)
{
number=number+100;
return number;
}
};
void main()
{
Demo d1;
int number,result;
number=5;
cout<<"initial value of no:"<<number<<endl;
result=d1.add(number);
cout<<"final value of no:"<<number<<endl;
cout<<"the result is:"<<result<<endl;
getch();
}

