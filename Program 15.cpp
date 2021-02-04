#include <iostream>
using namespace std;
int sphere() {
	int v = 4 * 3.14 * 4 * 4 * 4 / 3;
	return (v);
}
int main() {
	int z = sphere();
	cout << "Sphere is : " << z << endl; // prints !!!Hello World!!!
	return 0;
}
