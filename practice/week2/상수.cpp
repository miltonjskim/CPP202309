#include <iostream>
#define PI 3.14159265359 // define으로 상수 PI를 정의

using namespace std;

int main() {

	int income = 1000; // int 타입의 변수 income에 1000을 저장
	const double TAX_RATE = 0.25; // double 타입의 상수 TAX_RATE에 0.25를 저장
	income = income - TAX_RATE * income; // 변수 income에 TAX_RATE를 곱한 값을 빼고 저장

	double x = 100; // double 타입의 변수 x에 100저장
	x = x * PI; // 변수 x에 상수 PI를 곱한 값을 저장

	cout << x << endl; // 변수 x 출력

	return 0;
}