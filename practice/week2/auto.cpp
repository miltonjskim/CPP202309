#include <iostream>

using namespace std;

// auto Ÿ���� �޼ҵ� add
// int Ÿ���� ���� 2���� �Է¹ް� �� ���� ��ȯ
auto add(int x, int y) { 

	return x + y;
}

int main() {

	//add �޼ҵ忡 �Ķ���ͷ� 5�� 6�� �Է��ϰ� ��ȯ���� auto Ÿ�� ���� sum�� ���� 
	auto sum = add(5, 6); 

	cout << sum; // ���� sum ���

	return 0;
}