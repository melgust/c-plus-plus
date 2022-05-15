#include <iostream>

using namespace std;

int main() {
	char symbol;
	int size;
	cout << "Indique la cantidad: ";
	cin >> size;
	cout << "Indique el simbolo: ";
	cin >> symbol;
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j <= i; j++) {
			cout << symbol << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (i = size; i > 0; i--) {
		for (j = i; j > 0; j--) {
			cout << symbol << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < size; i++) {
		for (j = size; j > i + 1; j--) {
			cout << " " << " ";
		}
		for (j = 0; j <= i; j++) {
			cout << symbol << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < size; i++) {
		for (j = 0; j < i; j++) {
			cout << " " << " ";
		}
		for (j = size; j > i; j--) {
			cout << symbol << " ";
		}
		cout << endl;
	}
	return 0;
}
