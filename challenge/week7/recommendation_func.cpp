#include <iostream>
#include <vector>

using namespace std;

// 전역 변수, 배열 선언
const int NUM_USERS = 3; // 사용자의 수(값은 3)
const int NUM_ITEMS = 3; // 항목의 수(값은 3)
// 각 사용자의 항목 별 선호도를 저장할 int형 배열
int userPreferences[NUM_USERS][NUM_ITEMS];

// 사용자 별 선호도를 입력받아 초기화하는 함수
void initializePreferences() {

	// 각 사용자에 대해 항목 별 선호도를 입력받고 배열에 저장
	for (int i = 0; i < NUM_USERS; ++i) {
		cout << "사용자 " << (i + 1) << "의 선호도를 입력하세요 (";
		cout << NUM_ITEMS << "개의 항목에 대해): ";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			cin >> userPreferences[i][j];
		}
	}
}

// 사용자 별 추천 항목을 찾고 출력하는 함수
void findRecommendation() {

	// 사용자별로 최대 선호도를 갖는 항목의 인덱스를 찾아 출력
	for (int i = 0; i < NUM_USERS; ++i) {
		// 최대 선호도를 갖는 항목의 인덱스를 저장할 변수
		int maxPreferencesIndex = 0;
		// i번째 사용자가 가장 선호하는 항목의 인덱스 j찾기
		for (int j = 1; j < NUM_ITEMS; ++j) {
			if (userPreferences[i][j] > userPreferences[i][maxPreferencesIndex]) {
				maxPreferencesIndex = j;
			}
		}

		// 저장해둔 인덱스를 출력
		cout << "사용자 " << (i + 1) << "에게 추천하는 항목: ";
		cout << (maxPreferencesIndex + 1) << std::endl;
	}
}

int main() {

	initializePreferences();
	findRecommendation();

	return 0;
}