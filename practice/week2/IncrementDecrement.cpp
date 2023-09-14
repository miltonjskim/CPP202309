#include <iostream>

using namespace std;

int main() {

	int x = 1; // 변수에 x에 1을 저장

	// x를 먼저 출력하고 1을 더하므로, 1을 출력하고 x=2
	cout << "x = " << x++ << endl; 
	// x를 먼저 출력하고 1을 더하므로, 2를 출력하고 x=3
	cout << "x = " << x++ << endl;
	// x에 1을 더하고 출력하므로 x=4이고, 4를 출력
	cout << "x = " << ++x << endl;
	// x를 먼저 출력하고 1을 빼므로, 4를 출력하고 x=3
	cout << "x = " << x-- << endl;
	// x를 먼저 출력하고 1을 빼므로, 4를 출력하고 x=2
	cout << "x = " << x-- << endl;
	// x에 1을 빼고 출력하므로 x=1이고, 1을 출력
	cout << "x = " << --x << endl;

	return 0;
}