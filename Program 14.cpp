
#include <iostream>
using namespace std;
float circle() {
	float r = 2, a;
	a = 3.14 * r * r;
	return (a);
}
int main() {
	float z = circle();
	cout << "Area of Circle is : " << z << endl; // prints !!!Hello World!!!
	return 0;
}
