#include <iostream>

using namespace std;

int main() {

	// 사용자의 입력을 저장할 변수
	int userInput;

	cout << "정수를 10번 입력하세요 (0을 입력하면 종료):";
	int i = 0;

	// 사용자의 입력을 받아 userInput에 저장하고 이에 대한 처리 10번 반복
	for(i = 0; i < 10; i++) {

		cin >> userInput;

		if (userInput == 0) { // 단, 입력이 0인 경우 반복문 종료
			break;
		}
		
		// 입력값과 함께 횟수를 출력
		cout << "입력값: " << userInput << " 횟수 :" << i << endl;
	}

	// 반복문이 끝나면 종료를 알리는 문자열 출력
	cout << "종료 되었습니다.";

	return 0;
}