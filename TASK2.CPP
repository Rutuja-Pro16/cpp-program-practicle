#include<iostream.h>
#include<conio.h>
class item
{
static int count;

public:
void getdata()
{
count++;
}
void display()
{
cout<<"\n count="<<count<<endl;
}
};
int item::count;
void main()
{
item i1,i2;
i1.display();
i2.display();

cout<<"----------------"<<endl;
i1.getdata();
i2.getdata();

cout<<"-----------------"<<endl;
i1.display();
i2.display();

getch();
}
