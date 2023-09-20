#include <iostream>
//#include <time.h>

using namespace std;

int main() {

	srand(time(NULL)); // random 함수 관련 설정

	int answer = rand() % 100; // 정답을 저장할 변수
	int tries = 0; // 시도 횟수를 저장할 변수

	int guess; // 사용자의 입력을 저장할 변수

	while (true) {

		// 문자열을 출력하고 사용자의 입력을 받아 guess에 저장
		cout << "정답을 추측하여 보시오:";
		cin >> guess;

		tries++; // 시도 횟수 1증가

		// 입력이 정답과 같다면 시도 횟수와 함께 정답을 알리는 문자열 출력
		if (answer == guess) {
			cout << "축하합니다.시도 횟수=" << tries << endl;
			break;
		}

		// 입력이 정답보다 크다면 제시한 정수보다 높다는 안내 출력
		if (answer < guess) {
			cout << "제시한 정수가 높습니다." << endl;
		}
		// 입력이 정답보다 작다면 제시한 정수보다 작다는 안내 출력
		else if (answer > guess) {
			cout << "제시한 정수가 낮습니다." << endl;
		}
	}

	return 0;
}