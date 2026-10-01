#include <iostream>
using namespace std;

int main(){
	int a{2}, b{3};
	int zbroj = a + b;
	cout << zbroj << endl;
	double sredina = (a + b) / 2.00;
	bool var = a < b;

	cout << sredina << endl;
	cout << boolalpha << var << endl;


}