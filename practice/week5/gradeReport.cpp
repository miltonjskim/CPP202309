#include <iostream>
#include <string>

using namespace std;

int main() {

	const int STUDENT = 5; // 학생 수를 나타내는 상수
	const int SUBJECT = 3; // 과목 수를 나타내는 상수

	// 각 학생의 과목별 점수를 저장할 배열 (5 * 3)
	int scores[STUDENT][SUBJECT];

	// 5명의 학생들의 이름을 저장한 배열 
	string studentNames[STUDENT] = { "영수", "영희", "철수", "미미", "쥬쥬" };
	// 3과목의 이름을 저장한 배열
	string subjectNames[SUBJECT] = { "수학", "영어", "CPP" };

	// 5명의 학생당 3개의 과목씩 반복하는 2중 for문
	for (int i = 0; i < STUDENT; i++) {
		// studentNames의 i번째에 해당하는 학생의 이름과 함께 문자열 출력 
		cout << studentNames[i] << "의 성적을 하나씩 입력하세요." << endl;
		// subjectNames의 j번째에 해당하는 과목의 이름과 함께 문자열을 출력하고
		// i번째 학생의 j번째 과목의 점수를 scores[i][j]에 저장
		for (int j = 0; j < SUBJECT; j++) {
			cout << subjectNames[j] << ":";
			cin >> scores[i][j];
		}
	}

	// 위와 마찬가지로 5명의 학생당 3개의 과목씩 반복하는 2중 for문
	for (int i = 0; i < STUDENT; i++) {
		// i번째 학생의 이름과 함께 문자열 출력
		cout << studentNames[i] << "의 평균 점수는 ";
		// sum과 average는 double 타입으로 선언 -> average가 소수로 나타날 수 있음.
		// 과목의 총점을 저장할 변수 sum을 0으로 초기화
		double sum = 0;
		// 과목의 평균 점수를 저장할 변수 average를 0으로 초기화
		double average = 0;

		// i번째 학생의 각 과목의 점수를 합산해 sum에 저장
		for (int j = 0; j < SUBJECT; j++) {
			sum += scores[i][j];
		}
		// sum을 과목의 수인 상수 SUBJECT로 나눠 average에 저장
		average = sum / SUBJECT;

		// i번째 학생의 평균 점수를 출력
		cout << average << "입니다" << endl;
	}

	return 0;
}