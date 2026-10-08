#include <iostream>
using namespace std;


template <typename T>
bool ascending(T a,T b) {
	return a < b;
}

template <typename T>
bool descending(T a, T b) {
	return a > b;
}

template <typename T>
void my_sort(T arr[], int n, bool(*cmp)(T, T)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (cmp(arr[j], arr[i])) {
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

template <typename T>
void print(T arr[],int n) {
	for (int i = 0; i < n; i++) {
		cout << " " << arr[i];
	}
}


int main() {
	int arr1[] = {1,3,4,2,6,5};
	double arr2[] = { 1.3,3.3,4.2,2.4,6.1,5.4 };
	char arr3[] = { 'A','C','B','D',};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	int n3 = sizeof(arr3) / sizeof(arr3[0]);


	my_sort(arr1, n1, ascending);
	print(arr1, n1);
	cout << endl;
	my_sort(arr2, n2, descending);
	print(arr2, n2);
	cout << endl;
	my_sort(arr3, n3, ascending);
	print(arr3, n3);



}