#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	// �迭�� ũ�⸦ �����ϱ� ���� ���
	const int numCell = 10;
	// numCell * numCell ��, 10 * 10�� 2���� �迭 numList ����
	int numList[numCell][numCell];

	// 2���� �迭 numList�� ��� ��ҿ� ���� 
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			// numList[i][j]�� 0~999������ ������ ����
			numList[i][j] = rand() % 1000;
			// �ش� �ε����� ������ ������ ���
			cout << i << ", " << j << " : " << numList[i][j] << endl;
		}
	}

	cout << endl;

	int max = 0; // �ִ밪�� ������ ���� (���� 0���� �ʱ�ȭ)
	int maxI; // �ִ밪�� �ε��� i�� ������ ����
	int maxJ; // �ִ밪�� �ε��� j�� ������ ����

	// 2���� �迭 numList�� ��� ��ҿ� ����
	for (int i = 0; i < numCell; i++) {
		// j�� 0���� �ʱ�ȭ (i�� �ٲ�����Ƿ�)
		int j = 0;
		for (auto elem : numList[i]) {
			// elem�� max���� ũ�ٸ� max ���� �����ϰ� �ش� �ε��� i, j�� ������ ����
			if (elem > max) {
				max = elem;
				maxI = i;
				maxJ = j;
			}
			// �ش� for���� �ε����� �ƴ� ��ҷ� �����ϰ� �����Ƿ� �ִ밪�� j�� �����ϱ� ����
			// ���� for������ �ε��� j�� ������Ŵ.
			j++;
		}
	}

	// for���� ���� ���� max���� �ش� ����� �ε��� ���
	cout << "���� ū ���� " << max << "�̰�,";
	cout << "i�� j�� ���� " << maxI << ", " << maxJ << "�Դϴ�." << endl;
	// ���� �ε����� ��ҿ� �����Ͽ� �� ���� ���
	cout << "���� ���: " << numList[maxI][maxJ] << endl;

	return 0;
}