#include <iostream>
#include <string>
using namespace std;

int main() {

	int a; cin >> a;

	if (a >= 100) {
		cerr << a << endl;
		return 1;
	}

	string array[100];

	for (int i = 0; i < a; ++i) {
		cin >> array[i];
	}

	for (int i = a - 1; i >= 0; --i) {
		cout << array[i];

		if (i > 0) {
			cout << " ";
		}
			 
	}
	cout << endl;
}
