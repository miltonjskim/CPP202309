#include <iostream>

using namespace std;

int main() {

	// ������� �Է��� ������ ����
	int userInput;

	cout << "������ 10�� �Է��ϼ��� (0�� �Է��ϸ� ����):";
	int i = 0;

	// ������� �Է��� �޾� userInput�� �����ϰ� �̿� ���� ó�� 10�� �ݺ�
	for(i = 0; i < 10; i++) {

		cin >> userInput;

		if (userInput == 0) { // ��, �Է��� 0�� ��� �ݺ��� ����
			break;
		}
		
		// �Է°��� �Բ� Ƚ���� ���
		cout << "�Է°�: " << userInput << " Ƚ�� :" << i << endl;
	}

	// �ݺ����� ������ ���Ḧ �˸��� ���ڿ� ���
	cout << "���� �Ǿ����ϴ�.";

	return 0;
}