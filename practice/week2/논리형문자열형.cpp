#include <iostream>
#include <string>

using namespace std;

int main() {

	// string 타입의 변수 s1, s2에 각각 Good과 Bad를 저장
	string s1 = "Good"; 
	string s2 = "Bad";

	// boolean 타입의 변수 b에 s1 == s2의 논리식 결과를 저장 -> false
	bool b = (s1 == s2); 
	cout << b << endl; // 변수 b 출력

	s2 = "Good"; // 변수 s2의 값을 Good으로 변경
	b = (s1 == s2); // 변수 b에 다시 s1 == s2의 논리식 결과를 저장 -> 두 변수가 같아졌으므로 true
	cout << b << endl; // 변수 b 출력 

	return 0;
}