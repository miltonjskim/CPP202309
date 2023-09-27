#include <iostream>
#include <string>

using namespace std;

int main() {

	// 고객의 수를 3으로 고정하기 위한 상수 선언
	const int maxPeople = 3;

	// cout << "총 고객의 수를 입력하라: ";
	// cin >> maxPeople;

	// 상수 maxPeople 크기의 string 타입의 배열 names과 int 타입의 배열 ages 선언
	string names[maxPeople];
	int ages[maxPeople];

	/* 배열의 크기 즉, maxPeople 만큼 names에는 고객의 이름을 ages에는 나이를 입력받아
	** 요소에 저장하는 것을 반복하는 반복문 수행 */
	for (int i = 0; i < maxPeople; i++) {
		cout << "사람 " << i + 1 << "의 이름 : ";
		cin >> names[i];
		cout << "사람 " << i + 1 << "의 나이 : ";
		cin >> ages[i];
	}

	// 특정 나이대를 탐색하기 위한 기준이 되는 변수 ageThreshold 선언
	int ageThreshold;
	// ageThreshold에 값을 입력받아 저장
	cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요: ";
	cin >> ageThreshold;

	
	cout << ageThreshold << "세 이상인 고객들:\n";
	// 탐색된 고객의 수를 저장할 변수 cnt
	int cnt = 0;
	// 배열 전체에 대해 탐색을 수행하는 반복문
	for (int i = 0; i < maxPeople; i++) {
		// 해당 인덱스 i의 배열 ages의 요소값이 ageThreshold보다 큰 경우
		// 같은 인덱스의 names의 요소를 문자열에 출력하고 cnt를 1증가
		if (ages[i] > ageThreshold) {
			cout << names[i] << " (" << ages[i] << "세)" << endl;
			cnt++;
		}
	}

	// 탐색된 고객이 1명도 없어 cnt가 1보다 작은 경우 고객이 없음을 나타내는 문자열 출력
	if (cnt < 1) {
		cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다";
	}

	return 0;
}