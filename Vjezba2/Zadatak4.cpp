#include <iostream>
using namespace std;

void my_transform(int arr[], int n, int(*f)(int)) {
	for (int i = 0; i < n; i++) {
		arr[i] = f(arr[i]);
	}
}

int twice(int a) {
	return a * 2;
}

void print(int arr[],int n) {
	for (int i = 0; i < n;i++) {
		cout << " " << arr[i];
	}
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	my_transform(arr, n, twice);
	print(arr,n);
	
	my_transform(arr, n, [](int x) {
		if (x % 2 == 0) {
			return x / 2;
		}
		else {
			return x * 2;
		}
	});
	cout << endl;
	print(arr, n);

	cout << endl;
	int sum = 0;
	int produkt = 1;
	auto izracun = [&]() {
		for  (int i = 0; i < n; i++)
		{
			sum += arr[i];
			produkt *= arr[i];
		}
	};

	izracun();
	cout << sum << " " << produkt;
	int prag = 5;
	int s = 0;

	//nemoze lambda sa kontekstom
	auto izracun1 = [&,prag]() {
		for (int i = 0; i < n; i++)
		{
			if (arr[i]>prag) {
				s += arr[i];
			}
		}
	};
	cout << endl;
	izracun1();
	cout << s << endl;

}