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

	if (choice == 1) { // choice�� 1�̸�
		cout << "���� ������ �����߽��ϴ�." << endl;
	}
	else if (choice == 2) { // choice�� 2�̸�
		cout << "���� �ݱ⸦ �����߽��ϴ�." << endl;
	}
	else if (choice == 3) { // choice�� 3�̸�
		cout << "���α׷��� �����մϴ�." << endl;
	}
	else { // choice�� 1, 2, 3 ��� �ƴϸ�
		cout << "�߸��� �����Դϴ�." << endl;
	}

	return 0;
}