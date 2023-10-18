#include <iostream>
#include <string>

using namespace std;

int main() {

	// 문자열 s1, s2 선언
	string s1, s2;
	// 해밍 거리(같은 인덱스의 다른 문자)를 카운트할 변수
	int count = 0;

	// 두 문자열 s1, s2를 입력받아 저장
	cout << "DNA1: ";
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	// 두 문자열의 길이가 다른 경우 해밍 거리를 잴 수 없음.
	if (s1.length() != s2.length()) {
		cout << "오류: 길이가 다름" << endl;
	}
	// 두 문자열의 요소를 인덱스 0부터 끝까지 비교
	else {
		for (int i = 0; i < s1.length(); i++) {
			// 다른 요소가 있다면 해밍 거리 1증가
			if (s1[i] != s2[i]) {
				count++;
			}
		}
		// 구한 해밍 거리 출력
		cout << "해밍 거리는 " << count << endl;
	}

	return 0;
}