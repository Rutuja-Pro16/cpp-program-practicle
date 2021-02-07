#include<iostream.h>
#include<conio.h>
class student
{
private:
int Roll_no;
char Name[30];
float percentage;
public:
void getdata()
{
cout<<"\n enter the Name,Roll_no,percentage";
cin>>Name>>Roll_no>>percentage;
}
void putdata()
{
cout<<"\n Name="<<Name;
cout<<"\n Roll_no="<<Roll_no;
cout<<"\n percentage="<<percentage;
}
};
void main()
{
student s[5];
int i;
for(i=0;i<5;i++)
{
s[i].getdata();
s[i].putdata();
}
}