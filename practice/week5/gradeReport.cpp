#include <iostream>
#include <string>

using namespace std;

int main() {

	const int STUDENT = 5; // �л� ���� ��Ÿ���� ���
	const int SUBJECT = 3; // ���� ���� ��Ÿ���� ���

	// �� �л��� ���� ������ ������ �迭 (5 * 3)
	int scores[STUDENT][SUBJECT];

	// 5���� �л����� �̸��� ������ �迭 
	string studentNames[STUDENT] = { "����", "����", "ö��", "�̹�", "����" };
	// 3������ �̸��� ������ �迭
	string subjectNames[SUBJECT] = { "����", "����", "CPP" };

	// 5���� �л��� 3���� ���� �ݺ��ϴ� 2�� for��
	for (int i = 0; i < STUDENT; i++) {
		// studentNames�� i��°�� �ش��ϴ� �л��� �̸��� �Բ� ���ڿ� ��� 
		cout << studentNames[i] << "�� ������ �ϳ��� �Է��ϼ���." << endl;
		// subjectNames�� j��°�� �ش��ϴ� ������ �̸��� �Բ� ���ڿ��� ����ϰ�
		// i��° �л��� j��° ������ ������ scores[i][j]�� ����
		for (int j = 0; j < SUBJECT; j++) {
			cout << subjectNames[j] << ":";
			cin >> scores[i][j];
		}
	}

	// ���� ���������� 5���� �л��� 3���� ���� �ݺ��ϴ� 2�� for��
	for (int i = 0; i < STUDENT; i++) {
		// i��° �л��� �̸��� �Բ� ���ڿ� ���
		cout << studentNames[i] << "�� ��� ������ ";
		// sum�� average�� double Ÿ������ ���� -> average�� �Ҽ��� ��Ÿ�� �� ����.
		// ������ ������ ������ ���� sum�� 0���� �ʱ�ȭ
		double sum = 0;
		// ������ ��� ������ ������ ���� average�� 0���� �ʱ�ȭ
		double average = 0;

		// i��° �л��� �� ������ ������ �ջ��� sum�� ����
		for (int j = 0; j < SUBJECT; j++) {
			sum += scores[i][j];
		}
		// sum�� ������ ���� ��� SUBJECT�� ���� average�� ����
		average = sum / SUBJECT;

		// i��° �л��� ��� ������ ���
		cout << average << "�Դϴ�" << endl;
	}

	return 0;
}