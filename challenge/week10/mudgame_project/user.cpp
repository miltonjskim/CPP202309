#include "user.h"

using namespace std;

// ���� ü�°��� �Է¹޾� ������� ü���� ���ҽ�Ű�� �Լ�
void User::DecreaseHP(int dec_hp) {

	hp -= dec_hp;
}

// ������� ü���� ��ȯ�ϴ� �Լ�
int User::GetHP() {

	return hp;
}