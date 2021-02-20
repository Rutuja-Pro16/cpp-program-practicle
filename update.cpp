//============================================================================
// Name        : rutujaproject.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<string.h>

using namespace std;
class demo {
public:
	int option, password, roll_no, answer, marks = 0, totalmarks = 15;
	int c = 0;
	string name, lname, fname, fname2, lname2;
	char ch;
	int i;
	int x, y;
	char usr[10] = "user";
	char pass[10] = "1234";
	char us[10];
	char pas[10];
	int ob;
	ifstream fin;
	ofstream fout;
	int choice;
	int size = sizeof(name);
	void line() {
		cout << "\n";
		for (int i = 1; i < 80; i++)
			cout << "-";
		cout << endl;
	}
	void login() {
		for (int i = 1; i <= 2; i++) {

			cout << "1.Login" << endl;
			cout << "2.Create account" << endl;
			cout << "Enter option -  ";
			cin >> option;
			cout << endl;
			switch (option) {
			case 1:
				cout << "Enter user name: ";
				cin >> us;
				cout << "Enter user password: ";

				for (; ch != '\r';) {
					ch = getch();
					pas[c] = ch;
					c++;
					cout << "*";
				}
				cout << endl;
				c = c - 1;
				pas[c] = '\0';
				// cout("%s",pas);
				x = strcmp(us, usr);
				y = strcmp(pas, pass);
				if ((x == 0) && (y == 0)) {
					cout << "login successful" << endl;
				} else {
					cout << "login failed" << endl;
					exit(0);
				}

				cout << "------------------------------" << endl;
				cout << "Enter your first name - ";
				cin >> fname2;
				cout << "Enter your last name - ";
				cin >> lname2;
				cout << "Enter your roll_no - ";
				cin >> roll_no;

				for (int i = 1; i < 8; i++) {
					cout << endl;
					cout << "******Choose your option******" << endl;
					cout << endl;
					cout << "1. Display questions." << endl;
					cout << "2. Display correct answer." << endl;
					cout << "3. Display total marks." << endl;
					cout << "4. Display result." << endl;
					cout << "5. Exit ." << endl;
					cout << "Enter your option -  ";
					cin >> option;
					cout << endl;
					switch (option) {
					case 1:
						//q1

						cout << "Q1. How many days do we have in a week?"
								<< endl;
						cout << "1. seven" << endl;
						cout << "2. Two" << endl;
						cout << "3. Four" << endl;
						cout << "4. None of the above." << endl;
						cout << "Enter your option -  ";
						cin >> answer;
						if (answer == 1) {
							cout << "This is correct ans";
							marks = marks + 3;
						} else {
							cout << "This is wrong ans";
							marks = marks - 1;
						}
						//q2
						cout << "-----------------------------------------"
								<< endl;
						cout
								<< "Q2.Which of the following is the address operator?"
								<< endl;
						cout << "1. @" << endl;
						cout << "2. #" << endl;
						cout << "3. &" << endl;
						cout << "4. %" << endl;
						cout << "Enter your option -  ";
						cin >> answer;
						if (answer == 3) {
							marks = marks + 3;
						} else {
							marks = marks - 1;
						}
						//q3
						cout << "-----------------------------------------"
								<< endl;
						cout
								<< "Q3. Which animal is known as the Ship of the Desert?"

								<< endl;
						cout << "1. Elephant" << endl;
						cout << "2. Camel." << endl;
						cout << "3. lion" << endl;
						cout << "4. All of the above." << endl;
						cout << "Enter your option -  ";
						cin >> answer;
						if (answer == 2) {
							marks = marks + 3;
						} else {
							marks = marks - 1;
						}
						//q4
						cout << "-----------------------------------------"
								<< endl;
						cout << "Q4. How many days are there in a year?"
								<< endl;
						cout << "1. 250" << endl;
						cout << "2. 300" << endl;
						cout << "3. 265" << endl;
						cout << "4. 365" << endl;
						cout << "Enter your option -  ";
						cin >> answer;
						if (answer == 4) {
							marks = marks + 3;
						} else {
							marks = marks - 1;
						}
						//q5
						cout << "-----------------------------------------"
								<< endl;
						cout
								<< "Q5.Which of the following is the original creator of the C++ language?"
								<< endl;
						cout << "1. Dennis Ritchie." << endl;
						cout << "2. Ken Thompson." << endl;
						cout << "3. Bjarne Stroustrup." << endl;
						cout << "4. Brian Kernighan." << endl;
						cout << "Enter your option -  ";
						cin >> answer;
						if (answer == 3) {
							marks = marks + 3;
						} else {
							marks = marks - 1;
						}
						break;
					case 2:
						if (i == 2) {
							cout << "Correct Answers:  " << endl;

							cout << "Q1. How many days do we have in a week?"
									<< endl;
							cout << "Answer: 1. seven" << endl;

							cout
									<< "Q2.Which of the following is the address operator?"
									<< endl;
							cout << "Answer: 3. &." << endl;

							cout
									<< "Q3.Which animal is known as the ‘Ship of the Desert?"
									<< endl;
							cout << "Answer: 2. camel." << endl;

							cout << "Q4. How many days are there in a year?"
									<< endl;
							cout << "Answer: 4. 365." << endl;

							cout
									<< "Q5.Which of the following is the original creator of the C++ language?"
									<< endl;
							cout << "Answer: 3. Bjarne Stroustrup." << endl;

						} else {
							cout << "Please attempt the test " << endl;

						}

						break;
					case 3:
						if (i == 3) {
							cout << "Display total marks.";
							cout << endl;

							cout << "Your Total Score is " << marks
									<< " out of " << totalmarks << endl;
							break;
						} else {
							cout << "Please attempt the test " << endl;

						}

					case 4:
						if (i == 4) {
							if (marks >= 10) {

								cout << name
										<< " Congratulation you are pass and your marks is "
										<< marks << endl;
							} else {
								cout << name
										<< " Sorry!!You are fail and your marks is "
										<< marks << endl;
								cout << "better luck next time ";
							}
						}
						break;
					case 5:
						cout << "Thank You for taking the Test" << endl;
						exit(0);
						break;
					default:
						break;

					}
				}
				break;
			case 2:
				cout << "Enter first name - ";
				cin >> name;
				cout << "Enter last name - ";
				cin >> lname;
				cout << "Enter roll_no - ";
				cin >> roll_no;
				ofstream File("createaccount.txt");
				File << name << " " << lname << " " << roll_no << endl;
				File.close();
				cout << "Account created successfully";
				cout<<endl;
				cout<<"-------------------------------"<<endl;
				break;
				/*default:
				 break;*/
			}
		}
	}

};
int main() {
	demo d1;
	d1.login();
	return 0;
}

