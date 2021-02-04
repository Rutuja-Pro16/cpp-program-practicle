
#include <iostream>
using namespace std;
int cuboid() {
	int v, l = 275, b = 180, h = 140;
	v = l * b * h;
	return (v);
}
int main() {
	int c = cuboid();
	cout << "The volume of a cuboid : " << c << endl;
	return 0;
}
