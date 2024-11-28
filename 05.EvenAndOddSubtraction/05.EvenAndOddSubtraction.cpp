#include <iostream>
using namespace std;

int main() {

	int x; cin >> x;

	if (x >= 100) {         // �������� �� ������� ���� � ��-����� �� 100
		cerr << x << endl;
		return 1;
	}

	int numbers[100]{};   // ��������� ������ �� ���������� ���������

	for (int i = 0; i < x; ++i) { // �������� �� ������
		cin >> numbers[i];
	}

	int even = 0;
	int odd = 0;

	for (int i = 0; i < x; ++i) { // ������� even & odd ������� 
		if (numbers[i] % 2 == 0) {
			even += numbers[i];
		}
		else {
			odd += numbers[i];
		}
	}

	int diff = even - odd; // ��������� � �� ���� ... =)
	cout << diff << endl;

}
