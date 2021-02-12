#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
void main()
{
char str[3000];
fstream file_op("xyz.txt",ios::in);
fstream file_op1("pqr.txt",ios::out);
while(!file_op.eof())
{
file_op.getline(str,2000);
cout<<str;
file_op1<<str<<endl;
}
file_op.close();
cout<<endl;
getch();
}
