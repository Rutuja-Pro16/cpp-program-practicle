

#include <iostream>
using namespace std;
int vtprism() {
	int v, b = 3, h = 4, l = 6;
	v = 0.5 * b * l * h;
	return (v);
}
int main() {
	int a = vtprism();
	cout << "volume of a Triangle Prism : " << a << endl; 
	return 0;
}
