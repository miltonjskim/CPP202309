#include <iostream>

using namespace std;


int main() {

	// int형 변수 two, eight에 2와 8을 각각 저장 
	int two = 2;
	int eight = 8;

	// int형 변수 sum1, sum2에 2, 8을 저장
	int sum1 = 2;
	int sum2 = 8;

	sum1 *= two; // 축약된 문법으로 sum1 * two를 수행하고 결과를 sum1에 저장
	sum2 /= eight; // 축약된 문법으로 sum2 * eight를 수행하고 결과를 sum2에 저장

	// 연산의 결과가 담긴 변수 sum1, sum2와 함께 문자열 출력
	cout << "sum1 = " << sum1 << endl;
	cout << "sum2 = " << sum2 << endl;

	return 0;
}