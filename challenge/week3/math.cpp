#include <iostream>
#include <time.h>

using namespace std;

int main() {

	int i = 0; // ���� Ƚ���� ������ ����
	int ans; // ����ڰ� �Է��� ���� ������ ����
	cout << "��� ������ �ڵ����� �����մϴ�. " << endl;

	while (i < 5) { // ���� Ƚ���� 5ȸ�� �� ������ �ݺ�

		// 0~99�� �� ���ڸ� �������� ����
		int firstNum = rand() % 100; 
		int secondNum = rand() % 100;

		// �� ���� ���ڿ� �Բ� ������ �˸��� ���ڿ� ���
		cout << firstNum << "+" << secondNum << "=";

		// ����ڰ� �Է��� ���� ans�� ����
		cin >> ans;

		// �Է��� ���� �����̶�� ���� Ƚ�� i�� 1������Ű�� ���ڿ� ���
		if (ans == firstNum + secondNum) {
			cout << "�¾ҽ��ϴ�." << endl;
			i++;
		}
		// �����̶�� i�� ������Ű�� �ʰ� ���ڿ� ���
		else {
			cout << "Ʋ�Ƚ��ϴ�." << endl;
		}
	}

	return 0;
}