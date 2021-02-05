#include<iostream.h>
#include<conio.h>
class stud

{
public:
     int id;
      char name[20];
      int roll_no;
     void  rec(){
     cout<<"enter your id:"<<endl;
     cin>>id;
     cout<<"enter your name:";
     cin>>name;
     cout<<"enter your rollno :";
     cin>>roll_no;
	    }
	    void show(){
	    cout<<id<<name<<roll_no;
	     }
	     };
	     int main(){
	     stud s1;
	     s1.rec();
	     s1.show();
	     return 0;
	     }