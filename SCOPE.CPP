#include<iostream.h>
#include<conio.h>
int a=12;//global
void main()
{
int a=20;//local
cout<<"value of global a is:"<<::a<<endl;
cout<<"value of local a is:"<<a<<endl;
getch();
}
