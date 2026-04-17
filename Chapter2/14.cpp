#include<iostream>
using namespace std;

int main() {

	int a = 10, b = 20, c = 5;
	char menu[100];
	int count;
	while (1) {
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		cout << "오늘의 주문 가능량 : 짜장면 " << a << "인분, 짬뽕" << b << "인분, 볶음밥" << c << "인분" << endl;
		cout << "주문>>";
		cin >> menu;

		if (strcmp(menu, "짜장면") != 0 || strcmp(menu, "짬뽕") != 0 || strcmp(menu, "볶음밥") != 0) {
			cout << "없는 메뉴입니다." << endl << "프로그램 종료합니다.";
			return 0;
		}

		cin >> count;

		if (strcmp(menu, "짜장면") == 0) {
			if (count > a) {
				cout << a << "인분만 가능합니다" << endl;
			}
			else
				a = a - count;
		}
		else if (strcmp(menu, "짬뽕") == 0) {
			if (count > b) {
				cout << b << "인분만 가능합니다" << endl;
			}
			else
				b = b - count;
		}
		else if (strcmp(menu, "볶음밥") == 0) {
			if (count > c) {
				cout << c << "인분만 가능합니다" << endl;
			}
			else
				c = c - count;
		}

	}
	cout << "가능주문량 : 짜장면 " << a << "인분, " << b << "인분, 짬뽕 " << c << "인분" << endl;
	cout << "프로그램 종료합니다.";
	return 0;
}
