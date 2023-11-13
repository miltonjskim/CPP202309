#include "user.h"

using namespace std;

// hp를 20으로 초기화하는 생성자
User::User() {
	this->hp = 20;
}

// 깎을 체력값을 입력받아 사용자의 체력을 감소시키는 함수
void User::DecreaseHP(int dec_hp) {

	hp -= dec_hp;
}

// 더할 체력값을 입력받아 사용자의 체력을 증가시키는 함수
void User::IncreaseHP(int inc_hp) {

	hp += inc_hp;
}

// 사용자의 체력을 반환하는 함수
int User::GetHP() {

	return hp;
}
