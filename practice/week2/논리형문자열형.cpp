#include <iostream>
#include <string>

using namespace std;

int main() {

	// string Ÿ���� ���� s1, s2�� ���� Good�� Bad�� ����
	string s1 = "Good"; 
	string s2 = "Bad";

	// boolean Ÿ���� ���� b�� s1 == s2�� ���� ����� ���� -> false
	bool b = (s1 == s2); 
	cout << b << endl; // ���� b ���

	s2 = "Good"; // ���� s2�� ���� Good���� ����
	b = (s1 == s2); // ���� b�� �ٽ� s1 == s2�� ���� ����� ���� -> �� ������ ���������Ƿ� true
	cout << b << endl; // ���� b ��� 

	return 0;
}