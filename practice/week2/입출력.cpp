#include <iostream>
#include <string>

using namespace std;

int main() {

	string name; // 이름을 입력받기 위한 string 타입의 변수 name 선언 

	cout << "이름을 입력하시오: "; // 이름을 입력받기 전 문자열 출력 
	cin >> name; // name 변수에 이름을 입력받아 저장한다.
	cout << name << "을 환영합니다." << endl; // 입력받은 이름이 담긴 변수 name과 함께 문자열 출력

	return 0;
}