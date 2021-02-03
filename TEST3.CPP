#include<iostream.h>
#include<conio.h>
int area(int side);
void main()
{
int side;
int r=area(6);
cout<<"\n area of square is:"<<r<<endl;


getch();
}
int area(int side)
{
int area=side*side;
return area;

}