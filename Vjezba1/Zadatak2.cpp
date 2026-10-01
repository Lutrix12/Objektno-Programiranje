#include <iostream>
#include <string>
using namespace std;

int main(){
	int godina_rodenja;
	int counter=0;
	int counter2 = 0;
	cin >> godina_rodenja;

	cin.ignore();

	string ime_prezime;
	getline(cin, ime_prezime);

	cout << ime_prezime[0]<< ".";

	for (char n : ime_prezime) {
		counter++;
		if (n != ' ') {
			counter2++;
		}
	}
	
	for (int i = 1; i < counter ; i++) {
		if (ime_prezime[i] == ' ') {
			cout << ime_prezime[i + 1]<< "." << endl;
		}
	}
	cout << "zadrzi ovoliko slova bez razmaka " << counter2 << endl;
	int godiste = 2026 - godina_rodenja;
	cout << godiste;

}