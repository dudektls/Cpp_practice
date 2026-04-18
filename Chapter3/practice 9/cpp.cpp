#include "head.h"
#include <string>
#include<iostream>
using namespace std;

void Caffe::run() {
	serviceOrder();

}
void Caffe::serviceOrder() {

	int price = 0;

	while (1) {
		int order = getOrder();

		if (order == -1) {
			continue;
		}
		else if (order > 0) {
			cout << order << "원 입니다. 맛있게 드세요." << endl;
		}
		else{
			cout << "이것은 없는 종류입니다." << endl;
		}

		price += order;

		if (price >= 30000) {
			cout << "오늘 " << price << "원을 판매하여 카페를 닫습니다." << endl;
			break;
		}
	}
}

int Caffe::getOrder() {
	int orderprice;
	char coffee[100];
	int count;

	cout << "주문>> ";
	cin >> coffee >> count;
	if (count <= 0) {
		cout << "잔 수를 양수로 입력해주세요."<< endl;
		orderprice = -1;
	}
	if (strcmp(coffee, "에스프레소") == 0) {
		orderprice = 3000 * count;
	}
	else if (strcmp(coffee, "아메리카노") == 0) {
		orderprice = 3500 * count;
	}
	else if (strcmp(coffee, "카푸치노") == 0) {
		orderprice = 4000 * count;
	}
	else
		orderprice = 0;

	return orderprice;
}
