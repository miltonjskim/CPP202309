#include <iostream>
#include <string>

using namespace std;

class User {

private:
	int hp; // 유저의 체력

public:
	User();

	void DecreaseHP(int dec_hp);
	int GetHP();
	void IncreaseHP(int inc_hp);
};