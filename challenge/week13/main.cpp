#include "user.h"

using  namespace std;

const int map_x = 5; // ������ X��ǥ ũ��
const int map_y = 5; // ������ Y��ǥ ũ��

// ������ ������� ��ġ�� ����ϴ� �Լ�
void DisplayMap(int map[][map_x], User* mag, User* war) {
	// ���� ��ü�� ��ȸ
	for (int i = 0; i < map_y; i++) {
		for (int j = 0; j < map_x; j++) {
			// �����(Magician �Ǵ� Warrior)�� ��ġ�� ��ǥ�̸� �ش� ����� ���
			// Magician�� MAG�� Warrior�� WAR�� ���
			// �� ������� ��ġ�� ���� ��� MAG�� ���
			if (i == mag->y && j == mag->x) {
				cout << " MAG  |";
			} else if (i == war->y && j == war->x) {
				cout << " WAR  |";
			}
			// �ش� ����� ���� ���� ���ڿ� ���
			else {
				int pos_state = map[i][j];
				switch (pos_state) {
				case 0:
					cout << "      |"; // 6ĭ ����
					break;
				case 1:
					cout << "������|";
					break;
				case 2:
					cout << "  ��  |"; // �� �� 2ĭ ����
					break;
				case 3:
					cout << " ���� |"; // �� �� 1ĭ ����
					break;
				case 4:
					cout << "������|";
					break;
				}
			}
		}
		// �� �ٲٰ� ���м� ���
		cout << endl;
		cout << " -------------------------------- " << endl;
	}
}

// �̵��Ϸ��� ���� ��ȿ�� ��ǥ���� üũ�ϴ� �Լ�
bool CheckXY(int user_x, int map_x, int user_y, int map_y) {

	// ��ǥ�� 0���� ũ��, ������ ũ�⸦ ����� ������ true
	if (user_x >= 0 && user_x < map_x && user_y >= 0 && user_y < map_y) {
		return true;
	}
	return false;
}

// ������ ��ġ�� ���������� üũ�ϴ� �Լ�
bool CheckGoal(int map[][map_x], int user_x, int user_y) {

	// �������� (4, 4)�� �����ߴٸ� true
	if (map[user_y][user_x] == 4) {
		return true;
	}
	return false;
}

// ������� HP�� 0�� �Ǿ� ���ӿ� �����ߴ����� üũ�ϴ� �Լ�
bool CheckUser(User* my_user) {

	int hp = my_user->GetHP();

	// HP�� 0�� �Ǹ� false
	if (hp < 1) {
		return false;
	}
	return true;
}

// ���� ��ǥ������ ���¸� üũ�ϴ� �Լ�(������, ����, ��)
void CheckState(int map[][map_x], int user_x, int user_y, User& my_user) {

	int pos_state = map[user_y][user_x]; // ���� ������ ��ġ�� ��ǥ�� ��� ���� ����
	switch (pos_state) {
	case 1: // �������� �ִ� ���
		cout << "�������� �ֽ��ϴ�." << endl;
		break;
	case 2: // ���� �ִ� ���
		cout << "���� �ֽ��ϴ�. HP�� 2 �پ��ϴ�." << endl;
		my_user.DecreaseHP(2); // HP 2 ����
		my_user.DoAttack(); // ���� 
		break;
	case 3: // ������ �ִ� ���
		cout << "������ �ֽ��ϴ�. HP�� 2 �þ�ϴ�." << endl;
		my_user.IncreaseHP(2); // HP 2 ����
		break;
	}
}

int main() {

	// ������� ��ü Magician�� Warrior�� ����(�����ڿ� ���� hp �ʱⰪ�� 20)
	Magician* mag = new Magician();
	Warrior* war = new Warrior();

	// ������ ��ҵ� ä���ֱ�
	// 0�� �� ����, 1�� ������, 2�� ��, 3�� ����, 4�� ������
	int map[map_x][map_y] = { {0, 1, 2, 0, 4},
							{1, 0, 0, 2, 0},
							{0, 0, 0, 0, 0},
							{0, 2, 3, 0, 0},
							{3, 0, 0, 0, 2} };

	int turn = 1; // ������ ���������� ��Ÿ���� ����(odd -> mag / even -> war)
	User* cur_user; // ���� ����� ��ü�� ����Ű�� ������

	// ���� ����
	while (true) { // ����ڿ��� �Է��� ����ؼ� �ޱ� ���� ���� loop

		if (turn % 2 == 0) {
			cur_user = mag;
			cout << "Magician�� �����Դϴ�." << endl;
		}
		else {
			cur_user = war;
			cout << "Warrior�� �����Դϴ�." << endl;

		}

		// ������� �Է��� ������ ����
		string user_input = "";

		// showHealth �Լ��� ȣ���� ���� HP�� ���
		cur_user->ShowHealth();

		cout << "��ɾ �Է��ϼ��� (��, ��, ��, ��, ����, ����): ";
		cin >> user_input; // ����� �Է��� ����

		// �Է��� "��"
		if (user_input == "��") {
			cur_user->y--; // ������� y��ǥ�� 1���ҽ��� ���� �̵�
			if (CheckXY(cur_user->x, map_x, cur_user->y, map_y)) {
				cur_user->DecreaseHP(1); // �̵������Ƿ� ü�� 1 ����
				cout << "���� �� ĭ �ö󰩴ϴ�." << endl;
				// ���� ���
				DisplayMap(map, mag, war);
				// ���� ��ǥ ���� Ȯ��
				CheckState(map, cur_user->x, cur_user->y, *cur_user);
				turn++; // �̵��� �Ϸ������Ƿ� ���� ����
			}
			// ������ ����� �ٽ� ����
			else {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				cur_user->y++;
			}
		}
		// �Է��� "��"
		else if (user_input == "��") {
			cur_user->y++; // ������� y��ǥ�� 1�������� �Ʒ��� �̵�
			if (CheckXY(cur_user->x, map_x, cur_user->y, map_y)) {
				cur_user->DecreaseHP(1); // �̵������Ƿ� ü�� 1 ����
				cout << "�Ʒ��� �� ĭ �ö󰩴ϴ�." << endl;
				// ���� ���
				DisplayMap(map, mag, war);
				// ���� ��ǥ ���� Ȯ��
				CheckState(map, cur_user->x, cur_user->y, *cur_user);
				turn++; // �̵��� �Ϸ������Ƿ� ���� ����
			}
			// ������ ����� �ٽ� ����
			else {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				cur_user->y--;
			}
		}
		// �Է��� "��"
		else if (user_input == "��") {
			cur_user->x--; // ������� x��ǥ�� 1���ҽ��� �·� �̵�
			if (CheckXY(cur_user->x, map_x, cur_user->y, map_y)) {
				cur_user->DecreaseHP(1); // �̵������Ƿ� ü�� 1 ����
				cout << "�������� �̵��մϴ�." << endl;
				// ���� ���
				DisplayMap(map, mag, war);
				// ���� ��ǥ ���� Ȯ��
				CheckState(map, cur_user->x, cur_user->y, *cur_user);
				turn++; // �̵��� �Ϸ������Ƿ� ���� ����
			}
			// ������ ����� �ٽ� ����
			else {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				cur_user->x++;
			}
		}
		// �Է��� "��"
		else if (user_input == "��") {
			cur_user->x++; // ������� x��ǥ�� 1�������� ��� �̵�
			if (CheckXY(cur_user->x, map_x, cur_user->y, map_y)) {
				cur_user->DecreaseHP(1); // �̵������Ƿ� ü�� 1 ����
				cout << "���������� �̵��մϴ�." << endl;
				// ���� ���
				DisplayMap(map, mag, war);
				// ���� ��ǥ ���� Ȯ��
				CheckState(map, cur_user->x, cur_user->y, *cur_user);
				turn++; // �̵��� �Ϸ������Ƿ� ���� ����
			}
			// ������ ����� �ٽ� ����
			else {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				cur_user->x--;
			}
		}
		// �Է��� "����"
		else if (user_input == "����") {
			// ������ �����ִ� displayMap �Լ� ȣ��
			DisplayMap(map, mag, war);
		}
		// �Է��� "����"
		else if (user_input == "����") {
			cout << "�����մϴ�.";
			break; // ���� loop ����
		}
		// �� �ܿ� �ٸ� �߸��� �Է�
		else {
			cout << "�߸��� �Է��Դϴ�." << endl;
			continue;
		}

		// �������� �����ߴ��� üũ
		if (CheckGoal(map, cur_user->x, cur_user->y)) {
			// ���ڿ��� ����ϰ� loop ����
			cout << "�������� �����߽��ϴ�! �����մϴ�!" << endl;
			cout << "������ �����մϴ�." << endl;
			break;
		}

		// ü���� 1 �Ʒ��� �Ǿ����� üũ
		if (!CheckUser(cur_user)) {
			// ���ڿ��� ����ϰ� loop ����
			cout << "HP�� 0 ���ϰ� �Ǿ����ϴ�. �����߽��ϴ�." << endl;
			cout << "������ �����մϴ�." << endl;
			break;
		}
	}

	return 0;
}