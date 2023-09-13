#include <iostream>

using namespace std;

int main() {

	// int 타입 상수를 선언해 각각의 연도를 저장
	const int GREATE_VICTORY_SALSU = 612; 
	const int GREATE_VICTORY_GWIJU = 1019;

	// 연도를 저장한 상수와 함께 문자열을 출력
	cout << "고구려 살수대첩 연도 : " << GREATE_VICTORY_SALSU << "년" << endl;
	cout << "고려 귀주대첩 연도 : " << GREATE_VICTORY_GWIJU << "년" << endl;

	return 0;
}