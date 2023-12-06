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

// 사용자의 HP를 출력하는 함수
void User::ShowHealth() {

	// 전역변수 userHealth 출력
	cout << "현재 HP: " << this->GetHP() << "  ";
}

// User의 DoAttack
void User::DoAttack() {

	cout << "공격합니다" << endl;
}

// Magician의 생성자
Magician::Magician() {
	// User의 생성자 호출
	User::User();
}

// Magician 클래스의 DoAttack 오버라이딩
void Magician::DoAttack() {

	cout << "마법 사용" << endl;
}

// Warrior의 생성자
Warrior::Warrior() {
	// User의 생성자 호출
	User::User();
}

// Warrior 클래스의 DoAttack 오버라이딩
void Warrior::DoAttack() {

	cout << "배기 사용" << endl;
}