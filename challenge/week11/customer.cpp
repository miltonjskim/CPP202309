#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer {

	string name;
	int age;

public:
	Customer(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string GetName() {
		return this->name;
	}
	int GetAge() {
		return this->age;
	}
};

int main() {

	int max_people; // �� ���� ��

	cout << "�� ���� ���� �Է��϶�: ";
	cin >> max_people;

	// �� ��ü�� ��� ����
	vector<Customer> customers;

	// �� ���� �Է�
	for (int i = 0; i < max_people; i++) {
		string name;
		int age;
		cout << "��� " << i + 1 << "�� �̸� : ";
		cin >> name;
		cout << "��� " << i + 1 << "�� ���� : ";
		cin >> age;
		customers.push_back(Customer(name, age));
	}

	// Ư�� ���̴븦 Ž���ϱ� ���� ���� ����
	int age_threshold;

	// age_threshold�� ���� �Է¹޾� ����
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��ϼ���: ";
	cin >> age_threshold;


	cout << age_threshold << "�� �̻��� ����:\n";

	// Ž���� ���� ��
	int cnt = 0;
	// ���� ��ü Ž��
	for (Customer& obj : customers) {
		if (obj.GetAge() >= age_threshold) {
			cout << obj.GetName() << " (" << obj.GetAge() << "��)" << endl;
			cnt++;
		}
	}

	// Ž���� ���� 1�� ���� ���
	if (cnt < 1) {
		cout << age_threshold << "�̻��� ���̸� ���� ���� �����ϴ�";
	}

	return 0;
}