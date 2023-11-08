#include <iostream>
#include <string>

using namespace std;

class User {

public :
	int hp; // 사용자의 체력

	void DecreaseHP(int dec_hp);
	int GetHP();
};