#include<iostream>
using namespace std;

int main() {
	int a, b;
	cout << "정수를 입력하시오>>";
	cin >> a;
	b = (a % 100) / 10;
	cout << a << "의 10자리 수는 " << b << "입니다";
	return 0;
}
