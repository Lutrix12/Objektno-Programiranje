#include <iostream>
using namespace std;
int& find_max(int arr[], int n) {
		int max = 0;
		for (int i = 1; i < n; i++) {
			if (arr[i]>arr[max]) {
				max = i;
			}
		}
		return arr[max];
}
int main(){
	int numbers[] = { 4,-7,12,0,9,-3 };
	for (int niz : numbers) {
		cout << niz;
	}
	for (int& niz : numbers) {
		if (niz < 0) {
			niz = -niz;
		}
	}

	for (int niz : numbers) {
		cout << niz;
	}

	int num = sizeof(numbers) / sizeof(numbers[0]);

	find_max(numbers, num) = 0;

	cout << "\n";
	for (int niz : numbers) {
		cout << niz;
	}



}