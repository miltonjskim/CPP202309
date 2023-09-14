#include <iostream>

using namespace std;

int main() {

	// sizeof 메소드는 자료형의 크기를 반환한다.
	// 
	// 파라미터 'p'는 char 타입이고 char의 크기는 1byte
	cout << "char 크기 : " << sizeof('p') << endl;

	// 파라미터 10은 int 타입이고 int의 크기는 4byte
	cout << "int 크기 : " << sizeof(10) << endl;

	// 파라미터 10.0은 double 타입이고 double의 크기는 8byte
	cout << "double 크기 : " << sizeof(10.0) << endl;

	return 0;
}