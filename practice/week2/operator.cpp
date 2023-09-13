#include <iostream>

using namespace std;

int main() {

	// int 타입 변수 x,y,z에 1, -1, -2를 각각 저장
	int x = 1;
	int y = -1;
	int z = -2;

	// 문자열 내의 각 수에 해당하는 변수끼리 연산을 수행해 출력
	cout << "1 + (-1) = " << x + y << endl;
	cout << "-1 + -2 = " << y + z << endl;

	return 0;
}