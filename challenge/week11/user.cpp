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
