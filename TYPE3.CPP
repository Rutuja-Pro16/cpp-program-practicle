#include<iostream.h>
#include<conio.h>
class personal
{
char name[20],email_id[20];
public:
void getdata()
{
cout<<"\n enter name & email_id";
cin>>name>>email_id;
}
void putdata()
{
cout<<"\n name="<<name;
cout<<"\n email_id="<<email_id;
}
};
class Academic
{
public:
int tenthmark;
char tenthclass[10];
public:
void getAca()
{
cout<<"/n enter tenth marks and tenth class";
cin>>tenthmark>>tenthclass;
}
void putAca()
{
cout<<"\n tenth mark="<<tenthmark;
cout<<"\n tenth class="<<tenthclass;
}
};
class biodata:public personal,public Academic

{
};
void main()
{
clrscr();
biodata obj;
obj.getdata();
obj.putdata();
obj.getAca();
obj.putAca();
getch();
}