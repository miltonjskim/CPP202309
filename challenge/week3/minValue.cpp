#include <iostream>

using namespace std;

int main() {

	// int�� ���� a, b, c�� ���� �Է¹��� ����
	// int�� ���� smallest�� ���� ���� ���� ������ ����
	int a, b, c, smallest;

	// ���ڿ��� ����ϰ� ������ �Է¹޾� ������ ���� ����
	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;

	if (a < b && a < c) { // a�� b���� �����鼭 c���ٵ� �۴ٸ�
		smallest = a; // ���� ���� ���� a
	}
	else if (b < a && b < c) { // b�� a���� �����鼭 c���ٵ� �۴ٸ�
		smallest = b; // ���� ���� ���� b
	}
	else { // �� ���� �� �� �ƴ϶��
		smallest = c; // ���� ���� ���� c
	}

	// ���� ���� ���� ����� ���� smallest�� �Բ� ���ڿ� ���
	cout << "���� ���� ������" << smallest << endl;

	return 0;
}