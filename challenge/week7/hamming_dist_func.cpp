#include <iostream>
#include <string>

using namespace std;

// ���ڿ��� ��ҵ��� ��� lower case�� ��ȯ�ϴ� �Լ�
string toLowerStr(string str) {

	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
	
	return str;
}

// ���ڿ��� ��ҵ��� ��� upper case�� ��ȯ�ϴ� �Լ�
string toUpperStr(string str) {

	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
	}

	return str;
}

// �� ���ڿ��� �ع� �Ÿ��� ���ϴ� �Լ�
int calcHammingDist(string s1, string s2) {

	// �ع� �Ÿ�(���� �ε����� �ٸ� ����)�� ī��Ʈ�� ����
	// ��, ��ҹ��ڸ� �������� ����.
	int count = 0;
	
	// �Է¹��� �� ���ڿ��� ��ҹ��� �������� �ʱ� ����
	// ��� upper case�� �̷�������� ��ȯ
	s1 = toUpperStr(s1);
	s2 = toUpperStr(s2);

	cout << s1 << endl;
	cout << s2 << endl;

	// �ε��� 0���� �� ���ڿ��� ��Ҹ� ���� �ٸ��ٸ� count 1����
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			count++;
		}
	}

	return count;
}

int main() {

	// ���ڿ� s1, s2 ����
	string s1, s2;

	// �� ���ڿ� s1, s2�� �Է¹޾� ����
	cout << "DNA1: ";
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	// �Լ��� ȣ���Ͽ� �ع� �Ÿ��� ���ϰ� ���
	int count = calcHammingDist(s1, s2);
	cout << "�ع� �Ÿ��� " << count << endl;

	return 0;
}