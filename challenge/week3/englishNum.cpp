#include <iostream>

using namespace std;

int main() {

	int number; // ���ڸ� �Է¹��� ����
	// ���ڿ��� ����� ���ڸ� �Է¹ް� number�� ����
	cout << "���ڸ� �Է��Ͻÿ�:";
	cin >> number;

	if (number == 0) { // number�� 0�̸�
		cout << "zero\n"; // zero ���
	}
	else if (number == 1) { // number�� 1�̸�
		cout << "one\n"; // one ���
	}
	else { // number�� 0�� 1�� �ƴϸ� many ���
		cout << "many\n";
	}

	return 0;
}