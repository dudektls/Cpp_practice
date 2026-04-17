#include<iostream>
using namespace std;

int main() {

	char t[100];

	while (1) {
		cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>>";
		cin.getline(t, 100);
		if (strcmp(t, "exit") == 0) {
			return 0;
		}
		int N = strlen(t);
		int count = 0;

		for (int i = 0; i < N; i++) {
			if (t[i] == ' ') {
				count++;
			}

		}
		if (N > 0) {
			count = count + 1;
		}
		cout << "단어의 개수는 " << count << "개이다.";

	}


}
