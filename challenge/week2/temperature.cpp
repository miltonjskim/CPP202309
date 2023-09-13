#include <iostream>

using namespace std;

int main() {
	
	// double 타입 변수 f는 화씨온도를 입력받을 변수
	// 화씨온도가 소수로 입력될 수 있으므로 double 타입 변수를 사용
	double f; 

	// 섭씨온도롤 변환된 값을 저장할 변수
	double c;

	// 문자열을 출력하고 입력 받은 값을 변수 f에 저장
	cout << "화씨온도: ";
	cin >> f;

	// 섭씨온도로 변환하는 공식에 따라 연산을 수행한 결과를 변수 c에 저장
	c = (5.0 / 9.0) * (f - 32);

	// 변수 c와 함께 문자열 출력
	cout << "섭씨온도: " << c;

	return 0;
}