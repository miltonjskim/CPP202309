#include <iostream>

using namespace std;

int main() {

	int choice; // ������ �Է¹��� int�� ����

	// �� ���õ��� �ȳ��ϴ� ���ڿ� ���
	cout << "1. ���� ����" << endl;
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	// ������ �Է¹޾� choice�� ����
	cin >> choice;

	switch (choice) {

		case 1 : // choice�� 1�� ���
			cout << "���� ������ �����߽��ϴ�." << endl;
			break;

		case 2 : // choice�� 2�� ���
			cout << "���� �ݱ⸦ �����߽��ϴ�." << endl;
			break;

		case 3 : // choice�� 3�� ���
			cout << "���α׷��� �����մϴ�." << endl;
			break;
			
		default : // choice�� 1, 2, 3 �� �ƹ��͵� �ƴ� ���
			cout << "�߸��� �����Դϴ�." << endl;
			break;
	}

	return 0;
}