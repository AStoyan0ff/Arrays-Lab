#include <iostream>
using namespace std;

int main() {

	int numbers; cin >> numbers;

	if (numbers >= 100) {
		cerr << endl;
		return 1;
	}

	int num[100]{};
		
	for (int i = 0; i < numbers; ++i) {
		cin >> num[i];
	}

	int sum = 0;

	for (int i = 0; i < numbers; ++i) {
		if (num[i] % 2 == 0) {
			sum += num[i];
		}
		
	}
	cout << sum << endl;

	return 0;

}
