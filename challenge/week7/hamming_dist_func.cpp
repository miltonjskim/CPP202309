#include <iostream>
#include <string>

using namespace std;

// 문자열의 요소들을 모두 lower case로 변환하는 함수
string toLowerStr(string str) {

	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
	
	return str;
}

// 문자열의 요소들을 모두 upper case로 변환하는 함수
string toUpperStr(string str) {

	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
	}

	return str;
}

// 두 문자열의 해밍 거리를 구하는 함수
int calcHammingDist(string s1, string s2) {

	// 해밍 거리(같은 인덱스의 다른 문자)를 카운트할 변수
	// 단, 대소문자를 구분하지 않음.
	int count = 0;
	
	// 입력받은 두 문자열을 대소문자 구분하지 않기 위해
	// 모두 upper case로 이루어지도록 변환
	s1 = toUpperStr(s1);
	s2 = toUpperStr(s2);

	cout << s1 << endl;
	cout << s2 << endl;

	// 인덱스 0부터 두 문자열의 요소를 비교해 다르다면 count 1증가
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			count++;
		}
	}

	return count;
}

int main() {

	// 문자열 s1, s2 선언
	string s1, s2;

	// 두 문자열 s1, s2를 입력받아 저장
	cout << "DNA1: ";
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	// 함수를 호출하여 해밍 거리를 구하고 출력
	int count = calcHammingDist(s1, s2);
	cout << "해밍 거리는 " << count << endl;

	return 0;
}