#include <iostream>
#include <string>

using namespace std;

class User {

private:
	int hp; // ������ ü��

public:
	User();

	void DecreaseHP(int dec_hp);
	int GetHP();
	void IncreaseHP(int inc_hp);
};