#include<iostream.h>
#include<conio.h>
int rectangle(int w,int l);
void main()
{
int w,l,p;
cout<<"find perimeter:"<<endl;
cout<<"--------------------\n";
cout<<"length of rectangle:";
cin>>l;
cout<<"width of rectangle:";
cin>>w;
int s=rectangle(w,l);
cout<<"perimeter of rectangle is:"<<s<<endl;
getch();
}
int rectangle(int w,int l)
{
int p=2*(l+w);
return p;
}
