#include <iostream>

using namespace std;

int main() {

	// sizeof �޼ҵ�� �ڷ����� ũ�⸦ ��ȯ�Ѵ�.
	// 
	// �Ķ���� 'p'�� char Ÿ���̰� char�� ũ��� 1byte
	cout << "char ũ�� : " << sizeof('p') << endl;

	// �Ķ���� 10�� int Ÿ���̰� int�� ũ��� 4byte
	cout << "int ũ�� : " << sizeof(10) << endl;

	// �Ķ���� 10.0�� double Ÿ���̰� double�� ũ��� 8byte
	cout << "double ũ�� : " << sizeof(10.0) << endl;

	return 0;
}