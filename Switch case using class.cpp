
#include <iostream>
using namespace std;
class Demo {
public:

	void show() {
		cout << "Exit" << endl;
	}
	int add(int num1, int num2) {
		int c = num1 + num2;
		return (c);
	}
	int sub(int num1, int num2) {
		int c = num1 - num2;
		return (c);
	}
	int mul(int num1, int num2) {
		int c = num1 * num2;
		return (c);
	}
	int div(int num1, int num2) {
		int c = num1 / num2;
		return (c);
	}
};
int main() {
	char oper;
	int num1, num2;
	Demo d1;

	cout << "Press + for addition" << endl;
	cout << "Press - Subtraction" << endl;
	cout << "Press * Multiplication" << endl;
	cout << "Press / Division" << endl;
	cout << "Enter your Option : ";
	cin >> oper;
	cout << endl;

	switch (oper) {
	case '+':
		//cout << num1 << "+" << num2 << "=" << num1 + num2<<endl;
		cout << "Enter 1st number : ";
		cin >> num1;
		cout << "Enter 2nd number : ";
		cin >> num2;
		cout << num1 << "+" << num2 << "=";
		cout << d1.add(num1, num2);
		break;

	case '-':
		cout << "Enter 1st number : ";
		cin >> num1;
		cout << "Enter 2nd number : ";
		cin >> num2;
		cout << num1 << "-" << num2 << "=";
		cout << d1.sub(num1, num2);
		break;
	case '*':
		cout << "Enter 1st number : ";
		cin >> num1;
		cout << "Enter 2nd number : ";
		cin >> num2;
		cout << num1 << "*" << num2 << "=";
		cout << d1.mul(num1, num2);
		break;
	case '/':
		cout << "Enter 1st number : ";
		cin >> num1;
		cout << "Enter 2nd number : ";
		cin >> num2;
		cout << num1 << "/" << num2 << "=";
		cout << d1.div(num1, num2);
		break;
	default:
		cout << "error!operator is not correct";
		break;
	}
	return 0;
}

