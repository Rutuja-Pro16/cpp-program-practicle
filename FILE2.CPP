  #include<stdio.h>
#include<conio.h>
#include<fstream.h>

void main()
{
char str[2000];
fstream file_op("demo2.cpp",ios::in);
while(!file_op.eof())
{
file_op.getline(str,2000);
cout<<str;
}
file_op.close();
cout<<endl;
getch();
}