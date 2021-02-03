#include<iostream.h>
#include<conio.h>
int interest(float p,int n,float r=7);
void main()
{
float amount,principal;
int time;
cout<<"please enter principal amount";
cin>>principal;
cout<<"please enter time";
cin>>time;
amount=interest(3300,5);
cout<<amount;
getch();
}
int interest(float p,int n,float r)
{
return p*r*n/100;

}
