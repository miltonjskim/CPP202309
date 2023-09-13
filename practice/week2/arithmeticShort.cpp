#include <iostream>

using namespace std;

int main() {

	// int형 변수 two, eight에 2와 8을 각각 저장 
	int two = 2;
	int eight = 8;
	// int형 변수 sum1, sum2에 2를 저장
	int sum1 = 2;
	int sum2 = 2;

	sum1 = sum1 + two; // sum1에 일반적인 문법으로 덧셈 연산을 수행한 결과를 저장
	sum2 += eight; // sum2에 축약된 문법으로 덧셈 연산을 수행한 결과를 저장 -> 결과는 sum2 + eight과 같다.

	// 각각의 연산 결과를 문자열과 함께 출력
	cout << "sum1 = " << sum1 << endl;
	cout << "sum2 = " << sum2 << endl;

	return 0;
}