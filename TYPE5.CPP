#include<iostream.h>
#include<conio.h>
class animal
{
public:
void animal1()
{
cout<<"this is an animal";
}
};
//single inheritance
class dog:public animal
{
public:
void dog1()
{
cout<<"that is dog:";
}
};
class domestic
{
public:
void domestic1()
{
cout<<"domestic";
}
};
//multiple inheritance
class rocky:public dog,public domestic
{
public:
void rocky1()
{
cout<<"\n name of dog is rocky!\n";
}
};
void main()
{
animal a1;
dog d1;
domestic d2;
rocky r1;
a1.animal1();
d1.dog1();
d2.domestic1();
r1.rocky1();
getch();
}