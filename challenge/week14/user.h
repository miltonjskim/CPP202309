#include <iostream>
#include <string>

using namespace std;

class User {

private:
	int hp; // ������ ü��

public:
	int x = 0; // ������ x��ǥ
	int y = 0; // ������ y��ǥ

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