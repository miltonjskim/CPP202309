#include <iostream>

using namespace std;

// auto 타입의 메소드 add
// int 타입의 변수 2개를 입력받고 그 합을 반환
auto add(int x, int y) { 

	return x + y;
}

int main() {

	//add 메소드에 파라미터로 5와 6을 입력하고 반환값을 auto 타입 변수 sum에 저장 
	auto sum = add(5, 6); 

	cout << sum; // 변수 sum 출력

	return 0;
}