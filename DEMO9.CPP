#include<iostream.h>
#include<conio.h>
void mul(int x,int y);
void main()
{
mul(20,20);
getch();
}
void mul(int x,int y)
{
int result;
result=x*y;
cout<<" multiplication of"<<x<<"and"<<y<<"is"<<result<<endl;
}