#include <iostream>
#define PI 3.14159265359 // define���� ��� PI�� ����

using namespace std;

int main() {

	int income = 1000; // int Ÿ���� ���� income�� 1000�� ����
	const double TAX_RATE = 0.25; // double Ÿ���� ��� TAX_RATE�� 0.25�� ����
	income = income - TAX_RATE * income; // ���� income�� TAX_RATE�� ���� ���� ���� ����

	double x = 100; // double Ÿ���� ���� x�� 100����
	x = x * PI; // ���� x�� ��� PI�� ���� ���� ����

	cout << x << endl; // ���� x ���

	return 0;
}