#include <iostream>
using namespace std;

int main() {

	int a; cin >> a;

	if (a >= 100) {
		cerr << a << endl;
		return a;
	}

	int numbers[100]{}; 

	for (int i = 0; i < a; i++) {
		cin >> numbers[i];
	}

	for (int i = a - 1; i >= 0; i--) {
		cout << numbers[i];

		if (i > 0) cout << " ";
	} 
	
	cout << endl;
}	

