#include <iostream>
#include <string>
using namespace std;
namespace geo {
	const double pi = 3.1415;
	double area(double r) {
		return pi * r*r;
	}

	double area(double a, double b) {
		return a * b;
	}

	int area(int a) {
		return a * a;
	}
}

void print_line(char c = '-', int length = 30) {
	for (int i = 0; i < length; i++) {
		cout << c;
	}
}

int main(){
	using namespace geo;
	cout << area(5) << endl;
	cout << area(5.0) << endl;
	cout << area(2, 3) << endl;
	cout << area('A') << endl;

	print_line();

}