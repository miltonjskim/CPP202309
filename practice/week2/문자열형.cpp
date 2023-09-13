#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1 = "Good"; // string 타입의 변수 s1에 Good 저장
	string s2 = "Morning"; // string 타입의 변수 s2에 Morning 저장
	// string 타입 변수 s3에 string 연산을 수행한 값을 저장
	string s3 = s1 + " " + s2 + "!";

	cout << s3 << endl; // 변수 s3 출력 -> string 연산의 결과 문자열 s1, " ", s1, "!"가 합쳐친 값이 출력된다.

	return 0;
}