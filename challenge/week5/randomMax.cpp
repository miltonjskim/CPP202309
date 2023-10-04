#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	// 배열의 크기를 지정하기 위한 상수
	const int numCell = 10;
	// numCell * numCell 즉, 10 * 10의 2차원 배열 numList 선언
	int numList[numCell][numCell];

	// 2차원 배열 numList의 모든 요소에 대해 
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			// numList[i][j]에 0~999까지의 난수를 저장
			numList[i][j] = rand() % 1000;
			// 해당 인덱스와 생성된 난수를 출력
			cout << i << ", " << j << " : " << numList[i][j] << endl;
		}
	}

	cout << endl;

	int max = 0; // 최대값을 저장할 변수 (값을 0으로 초기화)
	int maxI; // 최대값의 인덱스 i를 저장할 변수
	int maxJ; // 최대값의 인덱스 j를 저장할 변수

	// 2차원 배열 numList의 모든 요소에 대해
	for (int i = 0; i < numCell; i++) {
		// j를 0으로 초기화 (i가 바뀌었으므로)
		int j = 0;
		for (auto elem : numList[i]) {
			// elem이 max보다 크다면 max 값을 갱신하고 해당 인덱스 i, j를 변수에 저장
			if (elem > max) {
				max = elem;
				maxI = i;
				maxJ = j;
			}
			// 해당 for문이 인덱스가 아닌 요소로 접근하고 있으므로 최대값의 j를 저장하기 위해
			// 내부 for문마다 인덱스 j를 증가시킴.
			j++;
		}
	}

	// for문을 통해 구한 max값과 해당 요소의 인덱스 출력
	cout << "가장 큰 값은 " << max << "이고,";
	cout << "i와 j는 각각 " << maxI << ", " << maxJ << "입니다." << endl;
	// 구한 인덱스로 요소에 접근하여 그 값을 출력
	cout << "검증 결과: " << numList[maxI][maxJ] << endl;

	return 0;
}