#include <iostream>
//#include <time.h>

using namespace std;

int main() {

	srand(time(NULL)); // random �Լ� ���� ����

	int answer = rand() % 100; // ������ ������ ����
	int tries = 0; // �õ� Ƚ���� ������ ����

	int guess; // ������� �Է��� ������ ����

	while (true) {

		// ���ڿ��� ����ϰ� ������� �Է��� �޾� guess�� ����
		cout << "������ �����Ͽ� ���ÿ�:";
		cin >> guess;

		tries++; // �õ� Ƚ�� 1����

		// �Է��� ����� ���ٸ� �õ� Ƚ���� �Բ� ������ �˸��� ���ڿ� ���
		if (answer == guess) {
			cout << "�����մϴ�.�õ� Ƚ��=" << tries << endl;
			break;
		}

		// �Է��� ���亸�� ũ�ٸ� ������ �������� ���ٴ� �ȳ� ���
		if (answer < guess) {
			cout << "������ ������ �����ϴ�." << endl;
		}
		// �Է��� ���亸�� �۴ٸ� ������ �������� �۴ٴ� �ȳ� ���
		else if (answer > guess) {
			cout << "������ ������ �����ϴ�." << endl;
		}
	}

	return 0;
}