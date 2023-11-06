#include <iostream>
#include <string>

using namespace std;

int strike = 0; // 스트라이크를 카운트하는 전역 변수
int ball = 0; // 볼을 카운트하는 전역 변수

// 자리수 중복 여부를 체크하는 함수(중복되면 false)
bool CheckNumber(string num_str) {

	// 각 자리수 추출
	char num1 = num_str[0];
	char num2 = num_str[1];
	char num3 = num_str[2];
	
	// 자리수 중복이 나타나면 false
	if ((num1 == num2) || (num1 == num3) || (num2 == num3)) {
		return false;
	}

	return true;
}

// 스트라이크-볼 판정을 하는 함수
void StrikeBallCount(string input_num, string num_str) {

	strike = 0;
	ball = 0;

	for (int i = 0; i < input_num.length(); i++) {
		// 각 자리수가 일치하는지 체크해 strike 카운트
		if (input_num[i] == num_str[i]) {
			strike++;
		}
		// 자리수는 달라도 같은 수가 있는지 ball 카운트
		else {
			for (int j = 0; j < num_str.length(); j++) {
				if (i != j) {
					if (input_num[i] == num_str[j]) {
						ball++;
					}
				}
			}
		}
	}
}

int main() {

	int random_num; // 난수를 저장할 변수
	string random_num_str; // 난수의 문자열 변환값을 저장할 변수

	int count = 1; // 시도 횟수를 저장할 변수
	string input_num; // 사용자가 입력한 숫자를 저장할 변수

	// 자리수 중복이 없는 3자리의 난수를 생성
	while (true) {

		random_num = rand() % 1000; // 새로운 난수 생성
		random_num_str = ""; // 문자열 초기화

		// 한 자리 수(00n)는 0이 2개로 불가
		if (random_num < 10) {
			continue;
		}

		// 숫자 비교를 용이하게 하기 위해 문자열로 변환
		random_num_str = to_string(random_num);

		// 두 자리 수는 맨 앞자리에 0 추가
		if (random_num < 100) {
			random_num_str = '0' + random_num_str;
		}

		// 자리수 중복 여부 체크
		if (!CheckNumber(random_num_str)) {
			continue;
		}
		else {
			break;
		}
	}

	// 사용자 입력을 받아 게임을 진행
	while (true) {
		
		// 시도 횟수 안내
		cout << count << "번째 시도입니다." << endl;

		while (true) {

			// 숫자 입력
			cout << "세자리 수를 입력해주세요: ";
			cin >> input_num;

			// 세자리 수인지 체크
			if (input_num.length() != 3) {
				cout << "입력된 숫자가 3자리 수가 아닙니다. 다시 입력하세요." << endl;
				continue;
			}
			// 자리수 중복 여부 체크
			else if (!CheckNumber(input_num)) {
				cout << "입력한 숫자에 중복된 숫자가 있습니다. 다시 입력하세요." << endl;
				continue;
			}
			// 유효한 수 -> 시도 횟수 카운트
			else {
				count++;
				break;
			}
		}

		// 입력한 수의 스트라이크-볼 판정
		if (input_num == random_num_str) {
			cout << "정답을 맞췄습니다. 축하합니다.";
			break;
		}
		else {
			StrikeBallCount(input_num, random_num_str);
			cout << input_num << "의 결과 : " << strike << " 스트라이크, " << ball << "볼 입니다." << endl;
		}
	}

	return 0;
}