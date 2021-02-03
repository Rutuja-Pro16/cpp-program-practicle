#include<iostream.h>
#include<conio.h>
void perimeter()
{
int w,l,p;
cout<<"\n\n find the  perimeter of rectangle:\n";
cout<<"---------------------------------------\n";
cout<<"length of rectangle:" ;
cin>>l;
cout<<"width of rectangle:";
cin>>w;
p=2*(l+w);
cout<<"perimeter of rectangle is:"<<p<<endl;
}
void main()
{
perimeter();
getch();
}