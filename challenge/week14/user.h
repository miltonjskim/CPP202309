#include <iostream>
#include <string>

using namespace std;

class User {

private:
	int hp; // 유저의 체력

public:
	int x = 0; // 유저의 x좌표
	int y = 0; // 유저의 y좌표

	User();

	void DecreaseHP(int dec_hp);
	int GetHP();
	void IncreaseHP(int inc_hp);
	void ShowHealth();
	virtual void DoAttack();
};

class Magician : public User {

public:
	Magician();

	void DoAttack() override;
};

class Warrior : public User {

public:
	Warrior();

	void DoAttack() override;
};