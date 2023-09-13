#include <iostream>
#include <string>

using namespace std;

int main() {

	char character = 'C'; // char타입 변수에 값을 저장
	int integer = 100; // int타입 변수에 값을 저장 
	double precision = 3.14159; // double타입 변수에 값을 저장
	bool is_true = true; // bool타입 변수에 값을 저장 
	string word = "Hello World"; // string타입 변수에 값을 저장 

	// 변수들과 함께 문자열 출력
	cout << "char : " << character << endl;
	cout << "int : " << integer << endl;
	cout << "double : " << precision << endl;
	cout << "bool : " << is_true << endl;
	cout << "string : " << word << endl;

	return 0;
}