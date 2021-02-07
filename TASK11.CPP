#include<iostream.h>
#include<conio.h>
class name
{
public:
int h1,m1,s1;
int h2,m2,s2;
int h,m,s;
void getdata()
{
cout<<"enter 1st time"<<endl;
cout<<"hour:";
cin>>h1;
cout<<"minute:";
cin>>m1;
cout<<"second:";
cin>>s1;
cout<<"------------------------"<<endl;
cout<<"enter 2nd time"<<endl;
cout<<"hour:";
cin>>h2;
cout<<"minute:";
cin>>m2;
cout<<"second:";
cin>>s2;
}
void add()
{
s=s1+s2;
m=m1+m2+(s/60);
h=h1+h2+(m/60);
m=m%60;
s=s%60;
}
void display()
{
cout<<"total time is:"<<h<<":"<<m<<":"<<s<<endl;
}
};
void main()
{
name n1;
n1.getdata();
n1.add();
n1.display();
getch();
}
