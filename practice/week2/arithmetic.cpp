#include <iostream>

using namespace std;

int main() {

	// int 타입의 변수 one, two, three, four에 각각에 해당하는 1, 2, 3, 4를 저장
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;

	// 앞선 문자열과 같은 연산을 변수를 이용해 연산을 수행하고 그 결과를 함께 출력
	cout << "1 + 3 = " << one + three << endl;
	cout << "4 - 2 = " << four - two << endl;
	cout << "2 * 3 = " << two * three << endl;
	cout << "4 / 2 = " << four / two << endl;

	cout << "2 + 3 * 4 = " << two + three * four << endl;
	cout << "2 + 3 * 4 = " << two + three * four << endl;
	cout << "1 + 4 / 2 = " << one + four / two << endl;

	return 0;
}