#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer {

	string name;
	int age;

public:
	Customer(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string GetName() {
		return this->name;
	}
	int GetAge() {
		return this->age;
	}
};

int main() {

	int max_people; // 총 고객의 수

	cout << "총 고객의 수를 입력하라: ";
	cin >> max_people;

	// 고객 객체를 담는 벡터
	vector<Customer> customers;

	// 고객 정보 입력
	for (int i = 0; i < max_people; i++) {
		string name;
		int age;
		cout << "사람 " << i + 1 << "의 이름 : ";
		cin >> name;
		cout << "사람 " << i + 1 << "의 나이 : ";
		cin >> age;
		customers.push_back(Customer(name, age));
	}

	// 특정 나이대를 탐색하기 위한 기준 나이
	int age_threshold;

	// age_threshold에 값을 입력받아 저장
	cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요: ";
	cin >> age_threshold;


	cout << age_threshold << "세 이상인 고객들:\n";

	// 탐색된 고객의 수
	int cnt = 0;
	// 벡터 전체 탐색
	for (Customer& obj : customers) {
		if (obj.GetAge() >= age_threshold) {
			cout << obj.GetName() << " (" << obj.GetAge() << "세)" << endl;
			cnt++;
		}
	}

	// 탐색된 고객이 1명도 없는 경우
	if (cnt < 1) {
		cout << age_threshold << "이상의 나이를 가진 고객이 없습니다";
	}

	return 0;
}