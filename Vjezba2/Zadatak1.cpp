#include <iostream>
#include <string>
using namespace std;
#define MAX(a, b) ((a) > (b) ? (a): (b))

inline int my_max(int a,int b) {
	return  a > b ? a : b;
}

template <typename T>
T template_my_max(T a, T b) {
	return a > b ? a : b;

}


int main() {
	int a = MAX(3, 5); 
	int b = 2 * MAX(3, 5); 
	int c = MAX(3, 5) + 1;

	cout << a <<" "<< b << " " << c;
	cout << endl;
	int i = 3;
	cout << MAX(++i,2);
	cout << endl;
	i = 3;
	cout << my_max(++i,2);
	cout << endl;
	cout << template_my_max(2, 3) << endl;
	cout << template_my_max(2.3, 3.4) << endl;
	cout << template_my_max('A', 'B') << endl;
	cout << template_my_max(string("Luka"),string("Ante")) << endl;
	
}