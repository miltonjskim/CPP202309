#include <iostream>
#include <string>

using namespace std;

int main() {

	// ���� ���� 3���� �����ϱ� ���� ��� ����
	const int maxPeople = 3;

	// cout << "�� ���� ���� �Է��϶�: ";
	// cin >> maxPeople;

	// ��� maxPeople ũ���� string Ÿ���� �迭 names�� int Ÿ���� �迭 ages ����
	string names[maxPeople];
	int ages[maxPeople];

	/* �迭�� ũ�� ��, maxPeople ��ŭ names���� ���� �̸��� ages���� ���̸� �Է¹޾�
	** ��ҿ� �����ϴ� ���� �ݺ��ϴ� �ݺ��� ���� */
	for (int i = 0; i < maxPeople; i++) {
		cout << "��� " << i + 1 << "�� �̸� : ";
		cin >> names[i];
		cout << "��� " << i + 1 << "�� ���� : ";
		cin >> ages[i];
	}

	// Ư�� ���̴븦 Ž���ϱ� ���� ������ �Ǵ� ���� ageThreshold ����
	int ageThreshold;
	// ageThreshold�� ���� �Է¹޾� ����
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��ϼ���: ";
	cin >> ageThreshold;

	
	cout << ageThreshold << "�� �̻��� ����:\n";
	// Ž���� ���� ���� ������ ���� cnt
	int cnt = 0;
	// �迭 ��ü�� ���� Ž���� �����ϴ� �ݺ���
	for (int i = 0; i < maxPeople; i++) {
		// �ش� �ε��� i�� �迭 ages�� ��Ұ��� ageThreshold���� ū ���
		// ���� �ε����� names�� ��Ҹ� ���ڿ��� ����ϰ� cnt�� 1����
		if (ages[i] > ageThreshold) {
			cout << names[i] << " (" << ages[i] << "��)" << endl;
			cnt++;
		}
	}

	// Ž���� ���� 1�� ���� cnt�� 1���� ���� ��� ���� ������ ��Ÿ���� ���ڿ� ���
	if (cnt < 1) {
		cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�";
	}

	return 0;
}