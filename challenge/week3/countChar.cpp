#include <iostream>

using namespace std;

int main() {

	int vowel = 0; // 모음 갯수를 저장할 변수
	int consonant = 0; // 자음 갯수를 저장할 변수


	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

	char ch; // 입력받은 영문자를 저장할 변수
	
	while (cin >> ch) { // 입력받은 문자가 EOF가 아닐때까지 반복
		
		switch (ch) { 
		// ch가 알파벳 모음에 해당하는 a, e, i, o, u라면 vowel 1증가
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
		// ch가 알파벳 모음이 아니라면 consonant 1증가
		default :
			consonant++;
		}
	}


	// 카운트한 모음과 자음의 갯수를 문자열과 함께 출력
	cout << "모음: " << vowel << endl;
	cout << "자음: " << consonant << endl;

	return 0;
}