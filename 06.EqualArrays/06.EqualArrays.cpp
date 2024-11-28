#include <iostream>
using namespace std;

int main() {

	int a; cin >> a;

	if (a >= 100) {
		cout << a << endl;
		return a;
	}

	int array[100]{}, array2[100]{};

	for (int i = 0; i < a; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < a; i++) {
		cin >> array2[i];
	}

	int result = 0;
	bool identy = true;

	for (int i = 0; i < a; i++) {
		if (array[i] != array2[i]) {
			cout << "Arrays are not identical. Found difference at " << i << " index." << endl;
			identy = false;
			break;
		}

		result += array[i];
	}
	
	if (identy) {
		cout << "Arrays are identical. Sum: " << result << endl;
	}
	
}
