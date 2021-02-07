#include<iostream.h>
#include<conio.h>
class Student
{
public:
double marks1,marks2;
};
//function returns object of student
Student createstudent()
{
Student student;
//initialize member variables of student
student.marks1=55.60;
student.marks2=60.34;
//print variables of srudent
cout<<"marks1="<<student.marks1<<endl;
cout<<"marks2="<<student.marks2<<endl;
return student;
}
void main()
{
Student student1;
//call function
student1=createstudent();
getch();
}
