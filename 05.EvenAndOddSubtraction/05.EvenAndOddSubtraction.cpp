#include <iostream>
using namespace std;

int main() {

	int x; cin >> x;

	if (x >= 100) {         // Проверка за числото дали е по-малко от 100
		cerr << x << endl;
		return 1;
	}

	int numbers[100]{};   // Деклариам масива за максимален капацитет

	for (int i = 0; i < x; ++i) { // Прочитам на масива
		cin >> numbers[i];
	}

	int even = 0;
	int odd = 0;

	for (int i = 0; i < x; ++i) { // Сумирам even & odd числата 
		if (numbers[i] % 2 == 0) {
			even += numbers[i];
		}
		else {
			odd += numbers[i];
		}
	}

	int diff = even - odd; // Разликата е на лице ... =)
	cout << diff << endl;

}
