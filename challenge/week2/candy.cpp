#include <iostream>

using namespace std;

int main() {

	int cash; // ö���� ������ �ִ� ���� ������ ����
	int price; // ĵ���� ������ ������ ���� 
	int max; // ö���� �ִ��� �� �� �ִ� ĵ�� ������ ������ ����
	int remainder; // �ִ�� ������ ��� ���� ���� ������ ����

	// ö���� ���� ������ �ִ� ���� �Է¹޾� ���� cash�� ����
	cout << "���� ������ �ִ� ��:" << endl;
	cin >> cash;

	// ĵ���� ������ �Է¹޾� ���� price�� ����
	cout << "ĵ���� ���� : ";
	cin >> price;

	/* cash�� price�� ���� ���� �ִ��� �� �� �ִ� ĵ���� �����̴�.
	** ������ ������ ���� ���� ���� max�� ���� */
	max = cash / price;
	/* cash�� price�� ���� �������� ������ ��� ���� ���̴�.
	** ������ ������ ���� �������� ���� remainder�� ���� */
	remainder = cash % price;

	// ���� ������ ������ ����  max, remainder�� ������ ���ڿ� ���
	cout << "�ִ�� �� �� �ִ� ĵ�� = " << max << endl;
	cout << "ĵ�� ���� �� ���� �� = " << remainder << endl;

	return 0;
}