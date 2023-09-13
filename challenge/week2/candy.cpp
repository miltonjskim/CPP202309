#include <iostream>

using namespace std;

int main() {

	int cash; // 철수가 가지고 있는 돈을 저장할 변수
	int price; // 캔디의 가격을 저장할 변수 
	int max; // 철수가 최대한 살 수 있는 캔디 개수를 저장할 변수
	int remainder; // 최대로 사탕을 사고 남은 돈을 저장할 변수

	// 철수가 현재 가지고 있는 돈을 입력받아 변수 cash에 저장
	cout << "현재 가지고 있는 돈:" << endl;
	cin >> cash;

	// 캔디의 가격을 입력받아 변수 price에 저장
	cout << "캔디의 가격 : ";
	cin >> price;

	/* cash를 price로 나눈 몫이 최대한 살 수 있는 캔디의 개수이다.
	** 연산을 수행해 구한 몫을 변수 max에 저장 */
	max = cash / price;
	/* cash를 price로 나눈 나머지가 사탕을 사고 남은 돈이다.
	** 연산을 수행해 구한 나머지를 변수 remainder에 저장 */
	remainder = cash % price;

	// 구한 값들을 저장한 변수  max, remainder를 포함해 문자열 출력
	cout << "최대로 살 수 있는 캔디 = " << max << endl;
	cout << "캔디 구입 후 남은 돈 = " << remainder << endl;

	return 0;
}