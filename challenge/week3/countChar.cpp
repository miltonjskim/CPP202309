#include <iostream>

using namespace std;

int main() {

	int vowel = 0; // ���� ������ ������ ����
	int consonant = 0; // ���� ������ ������ ����


	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

	char ch; // �Է¹��� �����ڸ� ������ ����
	
	while (cin >> ch) { // �Է¹��� ���ڰ� EOF�� �ƴҶ����� �ݺ�
		
		switch (ch) { 
		// ch�� ���ĺ� ������ �ش��ϴ� a, e, i, o, u��� vowel 1����
		case 'a' : 
			vowel++;
			break;
		case 'e' :
			vowel++;
			break;
		case 'i' :
			vowel++;
			break;
		case 'o' :
			vowel++;
			break;
		case 'u' :
			vowel++;
			break;
		// ch�� ���ĺ� ������ �ƴ϶�� consonant 1����
		default :
			consonant++;
		}
	}


	// ī��Ʈ�� ������ ������ ������ ���ڿ��� �Բ� ���
	cout << "����: " << vowel << endl;
	cout << "����: " << consonant << endl;

	return 0;
}