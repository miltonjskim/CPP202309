#include <iostream>

using namespace std;

int main() {

	double c; // ���� �µ��� �Է¹޾� ������ ����
	double f; // ȭ�� �µ��� ��ȯ�� ���� ������ ����

	// �����µ��� ���� ���ڿ��� ����ϰ� �Է°��� ���� c�� ����
	cout << "�����µ�: ";
	cin >> c;

	/* ���� �µ��� ȭ�� �µ��� ��ȯ�ϴ� ����
	** ȭ�� �µ� = ���� �µ� * (9.0 / 5.0) = 32 */
	// ���Ŀ� ���� ��ȯ�� ȭ�� �µ��� ���� f�� ����
	f = c * (9.0 / 5.0) + 32;

	// ���� f�� �Բ� ��ȯ ����� ��Ÿ���� ���ڿ� ���
	cout << "ȭ���µ� = " << f << endl;
}