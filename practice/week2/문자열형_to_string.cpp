#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1 = "사과"; // string 타입의 변수 s1에 "사과"를 저장

	string s2; // string 타입의 변수 s2 선언
	// s2에 string 연산의 결과를 저장 
	s2 = s1 + " " + to_string(10) + "개"; // to_string 메소드에 파라미터로 10을 준 결과 string 타입의 "10"이 반환된다.

	cout << s2 << endl; // 변수 s2 출력
}