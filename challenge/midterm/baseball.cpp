#include <iostream>
#include <string>

using namespace std;

int strike = 0; // ��Ʈ����ũ�� ī��Ʈ�ϴ� ���� ����
int ball = 0; // ���� ī��Ʈ�ϴ� ���� ����

// �ڸ��� �ߺ� ���θ� üũ�ϴ� �Լ�(�ߺ��Ǹ� false)
bool CheckNumber(string num_str) {

	// �� �ڸ��� ����
	char num1 = num_str[0];
	char num2 = num_str[1];
	char num3 = num_str[2];
	
	// �ڸ��� �ߺ��� ��Ÿ���� false
	if ((num1 == num2) || (num1 == num3) || (num2 == num3)) {
		return false;
	}

	return true;
}

// ��Ʈ����ũ-�� ������ �ϴ� �Լ�
void StrikeBallCount(string input_num, string num_str) {

	strike = 0;
	ball = 0;

	for (int i = 0; i < input_num.length(); i++) {
		// �� �ڸ����� ��ġ�ϴ��� üũ�� strike ī��Ʈ
		if (input_num[i] == num_str[i]) {
			strike++;
		}
		// �ڸ����� �޶� ���� ���� �ִ��� ball ī��Ʈ
		else {
			for (int j = 0; j < num_str.length(); j++) {
				if (i != j) {
					if (input_num[i] == num_str[j]) {
						ball++;
					}
				}
			}
		}
	}
}

int main() {

	int random_num; // ������ ������ ����
	string random_num_str; // ������ ���ڿ� ��ȯ���� ������ ����

	int count = 1; // �õ� Ƚ���� ������ ����
	string input_num; // ����ڰ� �Է��� ���ڸ� ������ ����

	// �ڸ��� �ߺ��� ���� 3�ڸ��� ������ ����
	while (true) {

		random_num = rand() % 1000; // ���ο� ���� ����
		random_num_str = ""; // ���ڿ� �ʱ�ȭ

		// �� �ڸ� ��(00n)�� 0�� 2���� �Ұ�
		if (random_num < 10) {
			continue;
		}

		// ���� �񱳸� �����ϰ� �ϱ� ���� ���ڿ��� ��ȯ
		random_num_str = to_string(random_num);

		// �� �ڸ� ���� �� ���ڸ��� 0 �߰�
		if (random_num < 100) {
			random_num_str = '0' + random_num_str;
		}

		// �ڸ��� �ߺ� ���� üũ
		if (!CheckNumber(random_num_str)) {
			continue;
		}
		else {
			break;
		}
	}

	// ����� �Է��� �޾� ������ ����
	while (true) {
		
		// �õ� Ƚ�� �ȳ�
		cout << count << "��° �õ��Դϴ�." << endl;

		while (true) {

			// ���� �Է�
			cout << "���ڸ� ���� �Է����ּ���: ";
			cin >> input_num;

			// ���ڸ� ������ üũ
			if (input_num.length() != 3) {
				cout << "�Էµ� ���ڰ� 3�ڸ� ���� �ƴմϴ�. �ٽ� �Է��ϼ���." << endl;
				continue;
			}
			// �ڸ��� �ߺ� ���� üũ
			else if (!CheckNumber(input_num)) {
				cout << "�Է��� ���ڿ� �ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է��ϼ���." << endl;
				continue;
			}
			// ��ȿ�� �� -> �õ� Ƚ�� ī��Ʈ
			else {
				count++;
				break;
			}
		}

		// �Է��� ���� ��Ʈ����ũ-�� ����
		if (input_num == random_num_str) {
			cout << "������ ������ϴ�. �����մϴ�.";
			break;
		}
		else {
			StrikeBallCount(input_num, random_num_str);
			cout << input_num << "�� ��� : " << strike << " ��Ʈ����ũ, " << ball << "�� �Դϴ�." << endl;
		}
	}

	return 0;
}