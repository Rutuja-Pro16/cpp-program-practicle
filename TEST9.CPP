#include<iostream.h>
#include<conio.h>

int bike(int a,int b)
{
int v=a%b;
return(v);
}
void main()
{
int x,y;
cout<<"enter value of x:"<<endl;
cin>>x;
cout<<"enter value of y:"<<endl;
cin>>y;
int v=bike(x,y);
cout<<"mod value is:"<<v<<endl;
getch();
}