#include <iostream>

using namespace std;

int main() {

	// int�� ���� two, eight�� 2�� 8�� ���� ���� 
	int two = 2;
	int eight = 8;
	// int�� ���� sum1, sum2�� 2�� ����
	int sum1 = 2;
	int sum2 = 2;

	sum1 = sum1 + two; // sum1�� �Ϲ����� �������� ���� ������ ������ ����� ����
	sum2 += eight; // sum2�� ���� �������� ���� ������ ������ ����� ���� -> ����� sum2 + eight�� ����.

	// ������ ���� ����� ���ڿ��� �Բ� ���
	cout << "sum1 = " << sum1 << endl;
	cout << "sum2 = " << sum2 << endl;

	return 0;
}