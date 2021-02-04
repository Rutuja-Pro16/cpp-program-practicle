#include<iostream.h>
#include<conio.h>
int si(int p,int r,int t)
{
int si=p*r*t/100;
return(si);
}
void main()
{
int p,r,t;
cout<<"enter principal:"<<endl;
cin>>p;
cout<<"enter rate of interest:"<<endl;
cin>>r;
cout<<"enter time in years:"<<endl;
cin>>t;
int s=si(p,r,t);
cout<<"simple interest is:"<<s<<endl;
getch();
}