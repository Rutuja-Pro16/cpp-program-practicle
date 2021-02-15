#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class demo {
public:
	char a1[6] = { 'A', 'b', 'c', 'D', 'e' };
	int a2[5] = { 1, 2, 3, 4, 5 };
	void fun() {
		for (int i = 0; i <= 4; i++) {
			cout << a1[i];
		}
		cout << endl;
		for (int j = 0; j <= 4; j++) {
			cout << a2[j];
		}
		cout << endl;
	}
};
int main() {
	demo d1,d2;
	d1.fun();
	d2.fun();
}
