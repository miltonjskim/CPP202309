#include <iostream>

using namespace std;

int main() {

	const int numCell = 3; // 보드판 줄의 크기 = 3
	// 보드판을 나타내는 3*3 배열 선언
	char board[numCell][numCell]{}; 

	int x, y; // 사용자에게 각각 x, y좌표를 입력받을 변수

	// 보드판 초기화
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}
	}

	// 게임을 진행하는 코드
	// 현재 차례인 사용자를 나타내는 int형 변수(0또는 짝수이면 X, 홀수이면 O)
	int k = 0;
	char currentUser = 'X'; // 현재 사용자의 돌을 저장할 변수
	while (true) {
		// 1. 현재 차례인 사용자를 출력한다.
		switch (k % 2) {
		case 0 :
			cout << k % 2 + 1 << "번 유저(X)의 차례입니다 -> ";
			currentUser = 'X';
			break;
		case 1 :
			cout << k % 2 + 1 << "번 유저(O)의 차례입니다 -> ";
			currentUser = 'O';
			break;
		}

		// 2. 사용자에게 좌표를 입력받는다.
		cout << "(x, y) 좌표를 입력하세요: ";
		cin >> x >> y;

		// 3. 입력한 좌표가 유효한지 체크한다.
		// 입력 받은 x, y 좌표 중 보드판을 벗어나는 case
		if (x >= numCell || y >= numCell) {
			cout << x << ", " << y << ": ";
			cout << " x 와 y 둘 중 하나가 칸을 벗어납니다." << endl;
			continue;
		}
		// 입력 받은 좌표 자리에 이미 돌이 있는 case
		if (board[x][y] != ' ') {
			cout << x << ", " << y << ": 이미 돌이 차있습니다." << endl;
			continue;
		}

		// 4. 입력한 좌표에 현재 차례인 유저의 돌을 놓는다.
		board[x][y] = currentUser;

		// 5. 현재의 보드판을 출력한다.
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				// 각 행의 마지막 열의 돌이면 "|" 출력x
				if (j == numCell - 1) {
					break;
				}
				cout << "  |";
			}
			cout << endl;
		}
		cout << "---|---|---" << endl;
		k++;

		// 6. 현재의 보드판에 승자가 있거나, 칸이 다 찼는지를 확인 후 결과를 출력한다.
		char winner = ' '; // 승자가 있다면 해당 승자의 돌을 저장하는 변수
		// 가로줄 검증
		for (int i = 0; i < numCell; i++) {
			char user = board[i][0];
			// 해당 좌표에 돌이 없다면 그 가로줄은 더 이상 탐색할 필요 x
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
				cout << "가로에 모두 돌이 놓였습니다!: ";
				if (winner == 'X') {
					cout << "1번 유저(X)의 승리입니다!" << endl;
				}
				else {
					cout << "2번 유저(O)의 승리입니다!" << endl;
				}
				cout << "종료합니다";
				break;
			}
		}
		// 세로줄 검증
		for (int i = 0; i < numCell; i++) {
			char user = board[0][i];
			// 해당 좌표에 돌이 없다면 그 세로줄은 더 이상 탐색할 필요 x
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
				cout << "세로에 모두 돌이 놓였습니다!: ";
				if (winner == 'X') {
					cout << "1번 유저(X)의 승리입니다!" << endl;
				}
				else {
					cout << "2번 유저(O)의 승리입니다!" << endl;
				}
				cout << "종료합니다";
				break;
			}
		}

		// 오른쪽 위 ~ 왼쪽 아래 대각선 검증
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
			cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다!: ";
			if (winner == 'X') {
				cout << "1번 유저(X)의 승리입니다!" << endl;
			}
			else {
				cout << "2번 유저(O)의 승리입니다!" << endl;
			}
			cout << "종료합니다";
			break;
		}

		// 왼쪽 위 ~ 오른쪽 아래 대각선 검증
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
			cout << "왼쪽 위에서 오른쪽 아래 대각선으로 모두 돌이 놓였습니다!: ";
			if (winner == 'X') {
				cout << "1번 유저(X)의 승리입니다!" << endl;
			}
			else {
				cout << "2번 유저(O)의 승리입니다!" << endl;
			}
			cout << "종료합니다";
			break;
		}

		// 보드판이 꽉 찼는지를 검증
		bool isFull = false; // 꽉 찼다면 true 아니면 false
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
			cout << "모든 칸이 다 찼습니다. 종료합니다";
			break;
		}
	}

	return 0;
}
