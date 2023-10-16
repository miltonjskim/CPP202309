#include <iostream>
#include <vector>

using namespace std;

// ���� ����, �迭 ����
const int NUM_USERS = 3; // ������� ��(���� 3)
const int NUM_ITEMS = 3; // �׸��� ��(���� 3)
// �� ������� �׸� �� ��ȣ���� ������ int�� �迭
int userPreferences[NUM_USERS][NUM_ITEMS];

// ����� �� ��ȣ���� �Է¹޾� �ʱ�ȭ�ϴ� �Լ�
void initializePreferences() {

	// �� ����ڿ� ���� �׸� �� ��ȣ���� �Է¹ް� �迭�� ����
	for (int i = 0; i < NUM_USERS; ++i) {
		cout << "����� " << (i + 1) << "�� ��ȣ���� �Է��ϼ��� (";
		cout << NUM_ITEMS << "���� �׸� ����): ";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> userPreferences[i][j];
		}
	}
}

// ����� �� ��õ �׸��� ã�� ����ϴ� �Լ�
void findRecommendation() {

	// ����ں��� �ִ� ��ȣ���� ���� �׸��� �ε����� ã�� ���
	for (int i = 0; i < NUM_USERS; ++i) {
		// �ִ� ��ȣ���� ���� �׸��� �ε����� ������ ����
		int maxPreferencesIndex = 0;
		// i��° ����ڰ� ���� ��ȣ�ϴ� �׸��� �ε��� jã��
		for (int j = 1; j < NUM_ITEMS; ++j) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferencesIndex]) {
				maxPreferencesIndex = j;
			}
		}

		// �����ص� �ε����� ���
		cout << "����� " << (i + 1) << "���� ��õ�ϴ� �׸�: ";
		cout << (maxPreferencesIndex + 1) << std::endl;
	}
}

int main() {

	initializePreferences();
	findRecommendation();

	return 0;
}