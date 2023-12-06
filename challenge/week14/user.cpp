#include "user.h"

using namespace std;

// hp�� 20���� �ʱ�ȭ�ϴ� ������
User::User() {
	this->hp = 20;
}

// ���� ü�°��� �Է¹޾� ������� ü���� ���ҽ�Ű�� �Լ�
void User::DecreaseHP(int dec_hp) {

	hp -= dec_hp;
}

// ���� ü�°��� �Է¹޾� ������� ü���� ������Ű�� �Լ�
void User::IncreaseHP(int inc_hp) {

	hp += inc_hp;
}

// ������� ü���� ��ȯ�ϴ� �Լ�
int User::GetHP() {

	return hp;
}

// ������� HP�� ����ϴ� �Լ�
void User::ShowHealth() {

	// �������� userHealth ���
	cout << "���� HP: " << this->GetHP() << "  ";
}

// User�� DoAttack
void User::DoAttack() {

	cout << "�����մϴ�" << endl;
}

// Magician�� ������
Magician::Magician() {
	// User�� ������ ȣ��
	User::User();
}

// Magician Ŭ������ DoAttack �������̵�
void Magician::DoAttack() {

	cout << "���� ���" << endl;
}

// Warrior�� ������
Warrior::Warrior() {
	// User�� ������ ȣ��
	User::User();
}

// Warrior Ŭ������ DoAttack �������̵�
void Warrior::DoAttack() {

	cout << "��� ���" << endl;
}