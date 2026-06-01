#include<iostream>
#include<string>
using namespace std;

#include "Pet.h"

Pet::Pet() {

}

Pet::Pet(string name, string type) {  //펫의 이름과 종류를 초기화하는 생성자
	petName = name;
	petType = type;
}
void Pet::printStart() {  //펫의 초기 상태를 출력하는 함수
	cout << "=================================" << endl;
	cout << "사용자의 반려동물입니다" << endl;
	cout << "펫의 종류: "<<petType << endl;
	cout << "펫의 이름: " << petName << endl;
	cout << "=================================" << endl;
}

void Pet::printterm(int totalturn) {   // 양육기간 출력
	cout << "정해진 양육 기간 : " << totalturn << "턴" << endl;
}

void Pet::printStatus() {  // 매번 나오는 스탯창 출력
	cout << "=================================" << endl;
	cout << petType << petName << "의 현재 스탯입니다." << endl;
	cout << "에너지 : " << Energy << endl;
	cout << "친밀도 : " << Love << endl;
	cout << "================================"<<endl;

}

