#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1 = "���"; // string Ÿ���� ���� s1�� "���"�� ����

	string s2; // string Ÿ���� ���� s2 ����
	// s2�� string ������ ����� ���� 
	s2 = s1 + " " + to_string(10) + "��"; // to_string �޼ҵ忡 �Ķ���ͷ� 10�� �� ��� string Ÿ���� "10"�� ��ȯ�ȴ�.

	cout << s2 << endl; // ���� s2 ���
}