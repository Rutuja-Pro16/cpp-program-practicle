#include<iostream.h>
#include<conio.h>
class Myclass
{
int x;
public:
void set(int i)
{
x=i;
}
int get()
{
return x;
}
};
void main()
{
Myclass m[4];
int i;
for(i=0;i<4;i++)
{
m[i].set(i);
}
for(i=0;i<4;i++)
{
cout<<"m["<<i<<"].get():"<<m[i].get()<<"\n";
getch();

}}