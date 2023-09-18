#include <iostream>

using namespace std;

int main() {

	// int형 변수 a, b, c는 수를 입력받을 변수
	// int형 변수 smallest는 가장 작은 수를 저장할 변수
	int a, b, c, smallest;

	// 문자열을 출력하고 정수를 입력받아 변수에 각각 저장
	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c;

	if (a < b && a < c) { // a가 b보다 작으면서 c보다도 작다면
		smallest = a; // 가장 작은 수는 a
	}
	else if (b < a && b < c) { // b가 a보다 작으면서 c보다도 작다면
		smallest = b; // 가장 작은 수는 b
	}
	else { // 위 조건 둘 다 아니라면
		smallest = c; // 가장 작은 수는 c
	}

	// 가장 작은 수가 저장된 변수 smallest와 함께 문자열 출력
	cout << "가장 작은 정수는" << smallest << endl;

	return 0;
}