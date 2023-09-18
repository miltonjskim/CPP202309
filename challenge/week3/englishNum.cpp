#include <iostream>

using namespace std;

int main() {

	int number; // 숫자를 입력받을 변수
	// 문자열을 출력해 숫자를 입력받고 number에 저장
	cout << "숫자를 입력하시오:";
	cin >> number;

	if (number == 0) { // number가 0이면
		cout << "zero\n"; // zero 출력
	}
	else if (number == 1) { // number가 1이면
		cout << "one\n"; // one 출력
	}
	else { // number가 0도 1도 아니면 many 출력
		cout << "many\n";
	}

	return 0;
}