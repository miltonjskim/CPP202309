#include <iostream>
#include <string>

using namespace std;

int main() {

	// ���ڿ� s1, s2 ����
	string s1, s2;
	// �ع� �Ÿ�(���� �ε����� �ٸ� ����)�� ī��Ʈ�� ����
	int count = 0;

	// �� ���ڿ� s1, s2�� �Է¹޾� ����
	cout << "DNA1: ";
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	// �� ���ڿ��� ���̰� �ٸ� ��� �ع� �Ÿ��� �� �� ����.
	if (s1.length() != s2.length()) {
		cout << "����: ���̰� �ٸ�" << endl;
	}
	// �� ���ڿ��� ��Ҹ� �ε��� 0���� ������ ��
	else {
		for (int i = 0; i < s1.length(); i++) {
			// �ٸ� ��Ұ� �ִٸ� �ع� �Ÿ� 1����
			if (s1[i] != s2[i]) {
				count++;
			}
		}
		// ���� �ع� �Ÿ� ���
		cout << "�ع� �Ÿ��� " << count << endl;
	}

	return 0;
}