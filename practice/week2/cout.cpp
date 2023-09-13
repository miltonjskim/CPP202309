#include <iostream>

using namespace std;

int main() {

	int number = 0; // 숫자를 입력받을 int형 변수 number 선언

	cin >> number; // 변수 number에 숫자를 입력받아 저장

	// 입력한 숫자를 저장한 변수 number와 함께 문자열 출력
	cout << "입력한 숫자는 " << number << "입니다." << endl;

	return 0;
}