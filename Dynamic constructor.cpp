
#include <iostream>
#include <string.h>

using namespace std;
class sample {
public:
	int length;
	char *name;
	sample() {
		length = 0;
		name = new char[length];
	}
	sample(char n[]) {
		length = strlen(n);
		name = new char[length + 1];
		strcpy(name, n);
	}
	void display() {
		cout << name << " " << length;
	}
	~sample() {

		delete name ;
	}
};
int main() {
	sample s1("Rutuja"),s2,s3;
	s1.display();
	return 0;
}
