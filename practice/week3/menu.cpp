#include <iostream>

using namespace std;

int main() {

	int choice; // 선택을 입력받을 int형 변수

	// 각 선택들을 안내하는 문자열 출력
	cout << "1. 파일 저장" << endl;
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	// 선택을 입력받아 choice에 저장
	cin >> choice;

	switch (choice) {

		case 1 : // choice가 1인 경우
			cout << "파일 저장을 선택했습니다." << endl;
			break;

		case 2 : // choice가 2인 경우
			cout << "파일 닫기를 선택했습니다." << endl;
			break;

		case 3 : // choice가 3인 경우
			cout << "프로그램을 종료합니다." << endl;
			break;
			
		default : // choice가 1, 2, 3 중 아무것도 아닌 경우
			cout << "잘못된 선택입니다." << endl;
			break;
	}

	return 0;
}