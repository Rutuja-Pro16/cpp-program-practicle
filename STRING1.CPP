#include<iostream.h>
#include<conio.h>
class demo
{
public:
char str[100];
void show()
{
cout<<"enter a string:";
cin>>str;
}
void display()
{
cout<<"you entered:"<<str<<endl;

}
};
void main()
{
demo d1;
d1.show();
d1.display();
getch();
}
