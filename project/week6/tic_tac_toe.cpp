#include <iostream>

using namespace std;

int main() {

	const int numCell = 3; // ������ ���� ũ�� = 3
	// �������� ��Ÿ���� 3*3 �迭 ����
	char board[numCell][numCell]{}; 

	int x, y; // ����ڿ��� ���� x, y��ǥ�� �Է¹��� ����

	// ������ �ʱ�ȭ
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}
	}

	// ������ �����ϴ� �ڵ�
	// ���� ������ ����ڸ� ��Ÿ���� int�� ����(0�Ǵ� ¦���̸� X, Ȧ���̸� O)
	int k = 0;
	char currentUser = 'X'; // ���� ������� ���� ������ ����
	while (true) {
		// 1. ���� ������ ����ڸ� ����Ѵ�.
		switch (k % 2) {
		case 0 :
			cout << k % 2 + 1 << "�� ����(X)�� �����Դϴ� -> ";
			currentUser = 'X';
			break;
		case 1 :
			cout << k % 2 + 1 << "�� ����(O)�� �����Դϴ� -> ";
			currentUser = 'O';
			break;
		}

		// 2. ����ڿ��� ��ǥ�� �Է¹޴´�.
		cout << "(x, y) ��ǥ�� �Է��ϼ���: ";
		cin >> x >> y;

		// 3. �Է��� ��ǥ�� ��ȿ���� üũ�Ѵ�.
		// �Է� ���� x, y ��ǥ �� �������� ����� case
		if (x >= numCell || y >= numCell) {
			cout << x << ", " << y << ": ";
			cout << " x �� y �� �� �ϳ��� ĭ�� ����ϴ�." << endl;
			continue;
		}
		// �Է� ���� ��ǥ �ڸ��� �̹� ���� �ִ� case
		if (board[x][y] != ' ') {
			cout << x << ", " << y << ": �̹� ���� ���ֽ��ϴ�." << endl;
			continue;
		}

		// 4. �Է��� ��ǥ�� ���� ������ ������ ���� ���´�.
		board[x][y] = currentUser;

		// 5. ������ �������� ����Ѵ�.
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				// �� ���� ������ ���� ���̸� "|" ���x
				if (j == numCell - 1) {
					break;
				}
				cout << "  |";
			}
			cout << endl;
		}
		cout << "---|---|---" << endl;
		k++;

		// 6. ������ �����ǿ� ���ڰ� �ְų�, ĭ�� �� á������ Ȯ�� �� ����� ����Ѵ�.
		char winner = ' '; // ���ڰ� �ִٸ� �ش� ������ ���� �����ϴ� ����
		// ������ ����
		for (int i = 0; i < numCell; i++) {
			char user = board[i][0];
			// �ش� ��ǥ�� ���� ���ٸ� �� �������� �� �̻� Ž���� �ʿ� x
			if (user == ' ') {
				continue;
			}
			for (int j = 1; j < numCell; j++) {
				if (board[i][j] != user) {
					break;
				}
				if (j == numCell - 1) {
					winner = user;
				}
			}
			if (winner != ' ') {
				break;
			}
			if (winner != ' ') {
				cout << "���ο� ��� ���� �������ϴ�!: ";
				if (winner == 'X') {
					cout << "1�� ����(X)�� �¸��Դϴ�!" << endl;
				}
				else {
					cout << "2�� ����(O)�� �¸��Դϴ�!" << endl;
				}
				cout << "�����մϴ�";
				break;
			}
		}
		// ������ ����
		for (int i = 0; i < numCell; i++) {
			char user = board[0][i];
			// �ش� ��ǥ�� ���� ���ٸ� �� �������� �� �̻� Ž���� �ʿ� x
			if (user == ' ') {
				continue;
			}
			for (int j = 1; j < numCell; j++) {
				if (board[j][i] != user) {
					break;
				}
				if (j == numCell - 1) {
					winner = user;
				}
			}
			if (winner != ' ') {
				break;
			}
			if (winner != ' ') {
				cout << "���ο� ��� ���� �������ϴ�!: ";
				if (winner == 'X') {
					cout << "1�� ����(X)�� �¸��Դϴ�!" << endl;
				}
				else {
					cout << "2�� ����(O)�� �¸��Դϴ�!" << endl;
				}
				cout << "�����մϴ�";
				break;
			}
		}

		// ������ �� ~ ���� �Ʒ� �밢�� ����
		char user = board[0][0];
		if (user != ' ') {
			for (int i = 1; i < numCell; i++) {
				if (user != board[i][i]) {
					break;
				}
				if (i == numCell - 1) {
					winner = user;
				}
			}
		}
		if (winner != ' ') {
			cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�!: ";
			if (winner == 'X') {
				cout << "1�� ����(X)�� �¸��Դϴ�!" << endl;
			}
			else {
				cout << "2�� ����(O)�� �¸��Դϴ�!" << endl;
			}
			cout << "�����մϴ�";
			break;
		}

		// ���� �� ~ ������ �Ʒ� �밢�� ����
		user = board[numCell - 1][numCell - 1];
		if (user != ' ') {
			for (int i = numCell - 2; i > -1; i--) {
				if (user != board[i][i]) {
					break;
				}
				if (i == numCell - 1) {
					winner = user;
				}
			}
		}
		if (winner != ' ') {
			cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�!: ";
			if (winner == 'X') {
				cout << "1�� ����(X)�� �¸��Դϴ�!" << endl;
			}
			else {
				cout << "2�� ����(O)�� �¸��Դϴ�!" << endl;
			}
			cout << "�����մϴ�";
			break;
		}

		// �������� �� á������ ����
		bool isFull = false; // �� á�ٸ� true �ƴϸ� false
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					break;
				}
				if (i == numCell - 1 && j == numCell - 1) {
					isFull = true;
				}
			}
		}
		if (isFull == true) {
			cout << "��� ĭ�� �� á���ϴ�. �����մϴ�";
			break;
		}
	}

	return 0;
}
