#include <iostream>

using namespace std;

int main() {

	// int�� ���� a, b, c�� ���� �Է¹��� ����
	// int�� ���� largest�� ���� ū ���� ������ ����
	int a, b, c, largest;

	// ���ڿ��� ����ϰ� ������ �Է¹޾� ������ ���� ����
	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;

	if (a > b && a > c) { // a�� b���� ũ�鼭 c���ٵ� ũ�ٸ�
		largest = a; // ���� ū ���� a
	} 
	else if (b > a && b > c) { // b�� a���� ũ�鼭 c���ٵ� ũ�ٸ�
		largest = b; // ���� ū ���� b
	}
	else { // �� ���� �� �� �ƴ϶��
		largest = c; // ���� ū ���� c
	}

	// ���� ū ���� ����� ���� largest�� �Բ� ���ڿ� ���
	cout << "���� ū ������" << largest << endl;

	return 0;
}