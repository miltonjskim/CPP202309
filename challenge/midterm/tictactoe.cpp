#include <iostream>

using namespace std;

const int num_cell = 3; // �������� ���� �� ���� ���� ��������

// ��ǥ�� ��ȿ ���θ� üũ�ϴ� �Լ�
bool IsValid(char board[][num_cell], int x, int y) {

	// ��ǥ�� ������ ������ ��� ��
	if (x >= num_cell || y >= num_cell) {
		cout << x << "," << y << ": x�� y���� �ϳ��� ĭ�� ����ϴ�. " << endl;
		return false;
	}
	// �Է��� ��ǥ�� �̹� ���� ���� ��
	if (board[x][y] != ' ') {
		cout << x << "," << y << ": �̹� ���� ���ֽ��ϴ�. " << endl;
		return false;
	}
}

// ���ڰ� �ִ��� üũ�ϴ� �Լ�
bool CheckWin(char board[][num_cell], char current_user) {

	// ����/���� ���� üũ�ϱ�
	for (int i = 0; i < num_cell; i++) {
		if (board[i][0] == current_user && board[i][1] == current_user && board[i][2] == current_user) {
			cout << "���ο� ��� ���� �������ϴ�!!";

			return true;
		}
		if (board[0][i] == current_user && board[1][i] == current_user && board[2][i] == current_user) {
			cout << "���ο� ��� ���� �������ϴ�!!";

			return true;
		}
	}
	// �밢�� ���� üũ�ϱ�
	// ���� �� ~ ������ �Ʒ�
	for (int i = 0; i < num_cell; i++) {
		if (board[i][i] != current_user) {
			break;
		}
		if (i == num_cell - 1) {
			cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�!" << endl;
			return true;
		}
	}
	// ������ �� ~ ���� �Ʒ�
	for (int i = 0; i < num_cell; i++) {
		if (board[i][num_cell - i - 1] != current_user) {
			break;
		}
		if (i == num_cell - 1) {
			cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�!" << endl;
			return true;
		}
	}
}

int main() {

	// ������ �����ϴ� �� �ʿ��� ���� ����
	int k = 0; // ���� �������� üũ�ϱ� ���� ����
	char current_user = 'X'; // ���� ���� ���� ����ڸ� ��Ÿ���� ����
	char board[num_cell][num_cell]{}; // �������� ��Ÿ���� 2���� �迭
	int x, y = 0; // ����ڿ��� xy��ǥ���� �Է¹ޱ� ���� ����

	// ������ �ʱ�ȭ(��� ��ĭ����)
	for (int i = 0; i < num_cell; i++) {
		for (int j = 0; j < num_cell; j++) {
			board[i][j] = ' ';
		}
	}

	// ������ ���� �ݺ�
	while (true) {
		// ���� �������� ��� (X, O, H ������ ������)
		switch (k % 3) {
		case 0:
			current_user = 'X';
			break;
		case 1:
			current_user = 'O';
			break;
		case 2:
			current_user = 'H';
			break;
		}
		cout << k % 3 + 1 << "�� ����(" << current_user << ")�� �����Դϴ�. -> ";

		// ��ǥ �Է� �ޱ�
		cout << "(x, y) ��ǥ�� �Է��ϼ���: ";
		int x, y;
		cin >> x >> y;

		// �Է¹��� ��ǥ�� ��ȿ�� üũ
		if (!IsValid(board, x, y)) { // ��ȿ���� ���� �� ��ǥ �ٽ� �Է�
			continue;
		}

		// �Է¹��� ��ǥ�� ���� ������ �� ����
		board[x][y] = current_user;

		// ���� ���� �� ���
		for (int i = 0; i < num_cell; i++) {
			// ĭ ���м� ���
			for (int j = 0; j < num_cell; j++)
			{
				if (j == num_cell - 1) {
					cout << "---" << endl;
				}
				else {
					cout << "---|";
				}
			}
			// ���� �� ���
			for (int j = 0; j < num_cell; j++) {
				cout << board[i][j];
				if (j == num_cell - 1) {
					break;
				}
				cout << "  |";
			}
			cout << endl;
		}
		for (int j = 0; j < num_cell; j++)
		{
			if (j == num_cell - 1) {
				cout << "---" << endl;
			}
			else {
				cout << "---|";
			}
		}

		bool is_win = false; // �¸� ����
		// CheckWin �Լ��� ȣ���� ���� ������� �¸� ���� üũ
		is_win = CheckWin(board, current_user);

		// �¸��ڰ� �����Ǿ����� �ش� �÷��̾ ����ϰ� ������ �����Ѵ�.
		if (is_win == true) {
			cout << k % 3 + 1 << "�� ����(" << current_user << ")�� �¸��Դϴ�!" << endl;
			break;
		}

		// ��� ĭ �� á���� üũ�ϱ�
		int checked = 0;
		for (int i = 0; i < num_cell; i++) {
			for (int j = 0; j < num_cell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "��� ĭ�� �� á���ϴ�.  �����մϴ�. " << endl;
			break;
		}

		k++; // ���� ����ڿ��� �� �ѱ��
	}

	return 0;
}