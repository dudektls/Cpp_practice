#include<iostream>
using namespace std;

int main() {

	char name[100];
	int count;
	int a = 0;
	int b = 0;

	cout << "과대표 출마자 : 황수희, 장수희" << endl;

	while (1) {

		cout << "이름과 투표수 >>";

		cin >> name;

		if (strcmp(name, "그만") == 0) {

			cout << "최종집계 : 황수희 " << a << " 장수희 " << b << endl;

			if (a > b) {
				cout << "과대표로 황수희가 선출되었습니다.";
			}

			else if (a == b) {
				cout << "투표수가 같아 공동대표로 선출되었습니다.";
			}
			else
				cout << "과대표로 장수희가 선출되었습니다.";

			return 0;

		}
		cin >> count;

		if (strcmp(name, "황수희") == 0) {
			a = a + count;
		}

		else if (strcmp(name, "장수희") == 0) {
			b = b + count;
		}

		if ((strcmp(name, "황수희") != 0) && strcmp(name, "장수희") != 0) {
			cout << name << "은(는) 출마자가 아닙니다." << endl;
		}

	}

}
