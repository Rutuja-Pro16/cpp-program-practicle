#include<iostream.h>
#include<conio.h>
class student
{
int rno;
public:
void getnumber()
{
cout<<"enter roll no:";
cin>>rno;
}
void putnumber()
{
cout<<"\n\n\t Roll no:"<<rno<<endl;
}
};
class test:virtual public student
{
public:
int part1,part2;
void getmarks()
{
cout<<"enter marks\n";
cout<<"part1:";
cin>>part1;
cout<<"part2:";
cin>>part2;
}
void putmarks()
{
cout<<"\t marks obtained\n";
cout<<"\n\t part1:"<<part1;
cout<<"\n\tpart2:"<<part2;
}
};
class sports:public virtual student
{
public:
int score;
void getscore()
{
cout<<"enter sports score:";
cin>>score;
}
void putscore()
{
cout<<"\n\t sports score is:"<<score;
}
};
class result:public test,public sports
{
int total;
public:
void display()
{
total=part1+part2+score;
putnumber();
putmarks();
putscore();
cout<<"\n\t Total score:"<<total;
}
};
void main()
{
result r1;
clrscr();
r1.getnumber();
r1.getmarks();
r1.getscore();
r1.display();
getch();
}