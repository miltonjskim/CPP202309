#include <iostream>

using namespace std;

const int num_cell = 3; // 보드판의 가로 및 세로 길이 전역변수

// 좌표의 유효 여부를 체크하는 함수
bool IsValid(char board[][num_cell], int x, int y) {

	// 좌표가 보드판 범위를 벗어날 때
	if (x >= num_cell || y >= num_cell) {
		cout << x << "," << y << ": x와 y둘중 하나가 칸을 벗어납니다. " << endl;
		return false;
	}
	// 입력한 좌표에 이미 돌이 있을 때
	if (board[x][y] != ' ') {
		cout << x << "," << y << ": 이미 돌이 차있습니다. " << endl;
		return false;
	}
}

// 승자가 있는지 체크하는 함수
bool CheckWin(char board[][num_cell], char current_user) {

	// 가로/세로 빙고 체크하기
	for (int i = 0; i < num_cell; i++) {
		if (board[i][0] == current_user && board[i][1] == current_user && board[i][2] == current_user) {
			cout << "가로에 모두 돌이 놓였습니다!!";

			return true;
		}
		if (board[0][i] == current_user && board[1][i] == current_user && board[2][i] == current_user) {
			cout << "세로에 모두 돌이 놓였습니다!!";

			return true;
		}
	}
	// 대각선 빙고 체크하기
	// 왼쪽 위 ~ 오른쪽 아래
	for (int i = 0; i < num_cell; i++) {
		if (board[i][i] != current_user) {
			break;
		}
		if (i == num_cell - 1) {
			cout << "왼쪽 위에서 오른쪽 아래 대각선으로 모두 돌이 놓였습니다!" << endl;
			return true;
		}
	}
	// 오른쪽 위 ~ 왼쪽 아래
	for (int i = 0; i < num_cell; i++) {
		if (board[i][num_cell - i - 1] != current_user) {
			break;
		}
		if (i == num_cell - 1) {
			cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다!" << endl;
			return true;
		}
	}
}

int main() {

	// 게임을 진행하는 데 필요한 변수 선언
	int k = 0; // 누구 차례인지 체크하기 위한 변수
	char current_user = 'X'; // 현재 돌을 놓는 사용자를 나타내는 변수
	char board[num_cell][num_cell]{}; // 보드판을 나타내는 2차원 배열
	int x, y = 0; // 사용자에게 xy좌표값을 입력받기 위한 변수

	// 보드판 초기화(모두 빈칸으로)
	for (int i = 0; i < num_cell; i++) {
		for (int j = 0; j < num_cell; j++) {
			board[i][j] = ' ';
		}
	}

	// 게임을 무한 반복
	while (true) {
		// 누구 차례인지 출력 (X, O, H 순서로 번갈아)
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
		cout << k % 3 + 1 << "번 유저(" << current_user << ")의 차례입니다. -> ";

		// 좌표 입력 받기
		cout << "(x, y) 좌표를 입력하세요: ";
		int x, y;
		cin >> x >> y;

		// 입력받은 좌표의 유효성 체크
		if (!IsValid(board, x, y)) { // 유효하지 않을 시 좌표 다시 입력
			continue;
		}

		// 입력받은 좌표에 현재 유저의 돌 놓기
		board[x][y] = current_user;

		// 현재 보드 판 출력
		for (int i = 0; i < num_cell; i++) {
			// 칸 구분선 출력
			for (int j = 0; j < num_cell; j++)
			{
				if (j == num_cell - 1) {
					cout << "---" << endl;
				}
				else {
					cout << "---|";
				}
			}
			// 놓인 돌 출력
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

		bool is_win = false; // 승리 여부
		// CheckWin 함수를 호출해 현재 사용자의 승리 여부 체크
		is_win = CheckWin(board, current_user);

		// 승리자가 결정되었으면 해당 플레이어를 출력하고 게임을 종료한다.
		if (is_win == true) {
			cout << k % 3 + 1 << "번 유저(" << current_user << ")의 승리입니다!" << endl;
			break;
		}

		// 모든 칸 다 찼는지 체크하기
		int checked = 0;
		for (int i = 0; i < num_cell; i++) {
			for (int j = 0; j < num_cell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "모든 칸이 다 찼습니다.  종료합니다. " << endl;
			break;
		}

		k++; // 다음 사용자에게 턴 넘기기
	}

	return 0;
}