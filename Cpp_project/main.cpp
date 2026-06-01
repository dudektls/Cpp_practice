#include<iostream>
#include<string>
using namespace std;

#include "Pet.h"
#include "Dog.h"
#include "Cat.h" 

int main() {
	string Name;
	string Type;
	string doing;
	int totalturn=0;
	cout << "=================================" << endl;
	cout << "펫 키우기 게임에 오신걸 환영합니다" << endl;
	cout << "당신의 펫의 이름을 입력해주세요: ";
	cin >> Name;
	cout << "당신의 펫의 종류를 입력해주세요: ";	
	cin >> Type;	
	cout << "게임을 진행할 턴 수를 입력해주세요:";
	cin >> totalturn;
	cout << "===================================" << endl;

	Pet pet(Name, Type); // 초기값을 위한 객체 생성
	pet.printStart(); // 펫의 초기 상태 출력

	pet.printterm(totalturn);
	cout << "종은 결과가 있기를 바랍니다!" << endl;
	Pet* realpet = NULL;

	if (Type == "강아지") {
		realpet = new Dog(Name); // Dog 객체 생성
	}
	//else if (Type == "고양이") {
	//	realpet = new Cat(Name); // Cat 객체 생성
	//}
	


	delete realpet;
}
