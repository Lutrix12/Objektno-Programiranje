#include <iostream>
using namespace std;

inline bool ascending(int a,int b) {
	return a < b;
}

inline bool descending(int a, int b) {
	return a > b;
}

void my_sort(int arr[], int n, bool(*cmp)(int, int)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (cmp(arr[j], arr[i])) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void print(int arr[],int n) {
	for (int i = 0; i < n; i++) {
		cout << " " << arr[i];
	
	}

}


int main() {
	int arr[] = {1,3,4,2,6,5};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "hello" << endl;
	my_sort(arr, n, ascending);
	print(arr, n);
	cout << endl;
	my_sort(arr, n, descending);
	print(arr, n);

}