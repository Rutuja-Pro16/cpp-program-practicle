#include<iostream.h>
#include<conio.h>
void  quorem()
{
int divisor,dividend,quo,rem;
cout<<"enter dividend:";
cin>>dividend;
cout<<"enter divisor:";
cin>>divisor;
quo=dividend/divisor;
rem=dividend%divisor;
cout<<"quotient="<<quo<<endl;
cout<<"remainder="<<rem<<endl;
}
void main()
{
quorem();
getch();
}