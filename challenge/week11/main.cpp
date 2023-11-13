#include "user.h"

using  namespace std;

const int map_x = 5; // 지도의 X좌표 크기
const int map_y = 5; // 지도의 Y좌표 크기

// 지도와 사용자의 위치를 출력하는 함수
void DisplayMap(int map[][map_x], int user_x, int user_y) {
	// 지도 전체를 순회
	for (int i = 0; i < map_y; i++) {
		for (int j = 0; j < map_x; j++) {
			// 사용자의 위치인 좌표이면 USER 출력
			if (i == user_y && j == user_x) {
				cout << " USER |";
			}
			// 해당 요소의 값에 따라 문자열 출력
			else {
				int pos_state = map[i][j];
				switch (pos_state) {
				case 0:
					cout << "      |"; // 6칸 공백
					break;
				case 1:
					cout << "아이템|";
					break;
				case 2:
					cout << "  적  |"; // 양 옆 2칸 공백
					break;
				case 3:
					cout << " 포션 |"; // 양 옆 1칸 공백
					break;
				case 4:
					cout << "목적지|";
					break;
				}
			}
		}
		// 줄 바꾸고 구분선 출력
		cout << endl;
		cout << " -------------------------------- " << endl;
	}
}

// 이동하려는 곳이 유효한 좌표인지 체크하는 함수
bool CheckXY(int user_x, int map_x, int user_y, int map_y) {

	// 좌표가 0보다 크고, 지도의 크기를 벗어나지 않으면 true
	if (user_x >= 0 && user_x < map_x && user_y >= 0 && user_y < map_y) {
		return true;
	}
	return false;
}

// 유저의 위치가 목적지인지 체크하는 함수
bool CheckGoal(int map[][map_x], int user_x, int user_y) {

	// 목적지인 (4, 4)에 도달했다면 true
	if (map[user_y][user_x] == 4) {
		return true;
	}
	return false;
}

// 사용자의 HP를 출력하는 함수
void ShowHealth(User my_user) {

	// 전역변수 userHealth 출력
	cout << "현재 HP: " << my_user.GetHP() << "  ";
}

// 사용자의 HP가 0이 되어 게임에 실패했는지를 체크하는 함수
bool CheckUser(User my_user) {

	int hp = my_user.GetHP();

	// HP가 0이 되면 false
	if (hp < 1) {
		return false;
	}
	return true;
}

// 현재 좌표에서의 상태를 체크하는 함수(아이템, 포션, 적)
void CheckState(int map[][map_x], int user_x, int user_y, User& my_user) {

	int pos_state = map[user_y][user_x]; // 현재 유저가 위치한 좌표의 요소 값을 저장
	switch (pos_state) {
	case 1: // 아이템이 있는 경우
		cout << "아이템이 있습니다." << endl;
		break;
	case 2: // 적이 있는 경우
		cout << "적이 있습니다. HP가 2 줄어듭니다." << endl;
		my_user.DecreaseHP(2); // HP 2 감소
		break;
	case 3: // 포션이 있는 경우
		cout << "포션이 있습니다. HP가 2 늘어납니다." << endl;
		my_user.IncreaseHP(2); // HP 2 증가
		break;
	}
}

int main() {

	// 사용자의 객체를 생성(생성자에 의해 hp 초기값은 20)
	User my_user;

	// 지도에 요소들 채워넣기
	// 0은 빈 공간, 1은 아이템, 2는 적, 3은 포션, 4는 목적지
	int map[map_x][map_y] = { {0, 1, 2, 0, 4},
							{1, 0, 0, 2, 0},
							{0, 0, 0, 0, 0},
							{0, 2, 3, 0, 0},
							{3, 0, 0, 0, 2} };

	// 유저가 위치한 x, y좌표를 저장할 변수
	// 초기 위치는 (0, 0)	
	int user_x = 0;
	int user_y = 0;

	// 게임 시작
	while (true) { // 사용자에게 입력을 계속해서 받기 위해 무한 loop

		// 사용자의 입력을 저장할 변수
		string user_input = "";

		// showHealth 함수를 호출해 현재 HP를 출력
		ShowHealth(my_user);

		cout << "명령어를 입력하세요 (상, 하, 좌, 우, 지도, 종료): ";
		cin >> user_input; // 사용자 입력을 저장

		// 입력이 "상"
		if (user_input == "상") {
			user_y--; // 사용자의 y좌표를 1감소시켜 위로 이동
			if (CheckXY(user_x, map_x, user_y, map_y)) {
				my_user.DecreaseHP(1); // 이동했으므로 체력 1 감소
				cout << "위로 한 칸 올라갑니다." << endl;
				// 지도 출력
				DisplayMap(map, user_x, user_y);
				// 현재 좌표 상태 확인
				CheckState(map, user_x, user_y, my_user);
			}
			// 지도를 벗어나면 다시 복귀
			else {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_y++;
			}
		}
		// 입력이 "하"
		else if (user_input == "하") {
			user_y++; // 사용자의 y좌표를 1증가시켜 아래로 이동
			if (CheckXY(user_x, map_x, user_y, map_y)) {
				my_user.DecreaseHP(1); // 이동했으므로 체력 1 감소
				cout << "아래로 한 칸 올라갑니다." << endl;
				// 지도 출력
				DisplayMap(map, user_x, user_y);
				// 현재 좌표 상태 확인
				CheckState(map, user_x, user_y, my_user);
			}
			// 지도를 벗어나면 다시 복귀
			else {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_y--;
			}
		}
		// 입력이 "좌"
		else if (user_input == "좌") {
			user_x--; // 사용자의 x좌표를 1감소시켜 좌로 이동
			if (CheckXY(user_x, map_x, user_y, map_y)) {
				my_user.DecreaseHP(1); // 이동했으므로 체력 1 감소
				cout << "왼쪽으로 이동합니다." << endl;
				// 지도 출력
				DisplayMap(map, user_x, user_y);
				// 현재 좌표 상태 확인
				CheckState(map, user_x, user_y, my_user);
			}
			// 지도를 벗어나면 다시 복귀
			else {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_x++;
			}
		}
		// 입력이 "우"
		else if (user_input == "우") {
			user_x++; // 사용자의 x좌표를 1증가시켜 우로 이동
			if (CheckXY(user_x, map_x, user_y, map_y)) {
				my_user.DecreaseHP(1); // 이동했으므로 체력 1 감소
				cout << "오른쪽으로 이동합니다." << endl;
				// 지도 출력
				DisplayMap(map, user_x, user_y);
				// 현재 좌표 상태 확인
				CheckState(map, user_x, user_y, my_user);
			}
			// 지도를 벗어나면 다시 복귀
			else {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_x--;
			}
		}
		// 입력이 "지도"
		else if (user_input == "지도") {
			// 지도를 보여주는 displayMap 함수 호출
			DisplayMap(map, user_x, user_y);
		}
		// 입력이 "종료"
		else if (user_input == "종료") {
			cout << "종료합니다.";
			break; // 무한 loop 종료
		}
		// 그 외에 다른 잘못된 입력
		else {
			cout << "잘못된 입력입니다." << endl;
			continue;
		}

		// 목적지에 도달했는지 체크
		if (CheckGoal(map, user_x, user_y)) {
			// 문자열을 출력하고 loop 종료
			cout << "목적지에 도착했습니다! 축하합니다!" << endl;
			cout << "게임을 종료합니다." << endl;
			break;
		}

		// 체력이 1 아래가 되었는지 체크
		if (!CheckUser(my_user)) {
			// 문자열을 출력하고 loop 종료
			cout << "HP가 0 이하가 되었습니다. 실패했습니다." << endl;
			cout << "게임을 종료합니다." << endl;
			break;
		}
	}

	return 0;
}