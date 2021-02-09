#include<iostream.h>
#include<conio.h>
class student
{
public:
int rollno;
char name[20];
public:
void getdata()
{
cout<<"\n enter name & rollno:";
cin>>name>>rollno;
}
void putdata()
{
cout<<"\n name="<<name;
cout<<"\n rollno="<<rollno;
}
};
class exam:public student
{
public:
char subname[20];
public:
void getexam()
{
cout<<"\n enter subject name:";
cin>>subname;
}
void putexam()
{
cout<<"\n subject name="<<subname;
}
};
class library:public student
{
public:
int membershipno;
public:
void getlib()
{
cout<<"\n enter membership no:";
cin>>membershipno;
}
void putlib()
{
cout<<"\n membership no="<<membershipno;
}
};
void main()
{
clrscr();
student s1;
exam e1;
library l1;

  s1.getdata();
  s1.putdata();
  e1.getexam();
  e1.putexam();
  l1.getlib();
  l1.putlib();
  getch();
  }