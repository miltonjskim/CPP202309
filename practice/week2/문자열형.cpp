#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1 = "Good"; // string Ÿ���� ���� s1�� Good ����
	string s2 = "Morning"; // string Ÿ���� ���� s2�� Morning ����
	// string Ÿ�� ���� s3�� string ������ ������ ���� ����
	string s3 = s1 + " " + s2 + "!";

	cout << s3 << endl; // ���� s3 ��� -> string ������ ��� ���ڿ� s1, " ", s1, "!"�� ����ģ ���� ��µȴ�.

	return 0;
}