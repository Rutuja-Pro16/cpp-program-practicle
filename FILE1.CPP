#include<stdio.h>
#include<conio.h>
#include<fstream.h>

void main()
{
char str[2000];
fstream file_op("demo2.cpp",ios::in);
while(file_op>>str)
cout<<str;
file_op.close();
getch();
}