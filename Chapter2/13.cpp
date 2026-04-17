#include<iostream>
using namespace std;

int main() {

	char name[100];
	int count = 0;
	int n = 0;

	cout << "에스프레소는 3000, 아메리카노 3500원, 카푸치노 4000원입니다." << endl;
	while (1) {
		int add = 0;
		cout << "주문>>";
		cin >> name >> n;

		if (!strcmp(name, "에스프레소")) {
			add = 3000 * n;
		}
		else if (!strcmp(name, "아메리카노")) {
			add = 3500 * n;
		}
		else if (!strcmp(name, "카푸치노")) {
			add = 4000 * n;
		}
		cout << add << "원 입니다." << endl;

		count = count + add;
		if (count >= 30000) {
			break;
		}

	}
	cout << "오늘 " << count << "원을 판매하여 카페를 닫습니다.";

	return 0;
}
