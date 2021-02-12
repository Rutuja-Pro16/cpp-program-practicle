#include<iostream.h>
#include<conio.h>
#include<fstream.h>


void main(){

char str[2000];
clrscr();

fstream fileopen("file1.txt",ios::out);
fileopen<<"hi am ashaishbbnbn";
fileopen.close();



 getch();
}