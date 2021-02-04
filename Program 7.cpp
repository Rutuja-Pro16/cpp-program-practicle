
#include <iostream>
using namespace std;
int square() {
	int Area_of_Square, a = 8;
	Area_of_Square = a * a;
	return (Area_of_Square);

}
int main() {
	int s = square();
	cout << "Area of Square : " << s << endl; 
	return 0;
}
