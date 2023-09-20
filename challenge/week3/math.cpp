#include <iostream>
#include <time.h>

using namespace std;

int main() {

	int i = 0; // 정답 횟수를 저장할 변수
	int ans; // 사용자가 입력한 답을 저장할 변수
	cout << "산수 문제를 자동으로 출제합니다. " << endl;

	while (i < 5) { // 정답 횟수가 5회가 될 때까지 반복

		// 0~99의 두 숫자를 랜덤으로 생성
		int firstNum = rand() % 100; 
		int secondNum = rand() % 100;

		// 두 랜덤 숫자와 함께 문제를 알리는 문자열 출력
		cout << firstNum << "+" << secondNum << "=";

		// 사용자가 입력한 답을 ans에 저장
		cin >> ans;

		// 입력한 답이 정답이라면 정답 횟수 i를 1증가시키고 문자열 출력
		if (ans == firstNum + secondNum) {
			cout << "맞았습니다." << endl;
			i++;
		}
		// 오답이라면 i를 증가시키지 않고 문자열 출력
		else {
			cout << "틀렸습니다." << endl;
		}
	}

	return 0;
}