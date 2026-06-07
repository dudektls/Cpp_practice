#include<iostream>
#include<string>
#include "Pet.h"
#include "Dog.h"
#include "Food.h"  //음식정보를 가지고 오는 include
#include "Act.h"
using namespace std;


Dog::Dog(string name,int turn) : Pet(name, turn) {
	this->petName = name;
	
}
Dog::Dog(const Dog& mother) : Pet(mother) {
	this->petName = mother.petName + "의 새끼";
	this->Energy = 50;
	this->Love = 150;
}

Dog::Dog(const Pet& pet) : Pet(pet) {
	this->petName = pet.petName + "의 새끼";
	this->Energy = 50;
	this->Love = 150;
}

void Dog::printStatus() {
	cout << "=====================================================" << endl;
	cout << "반려동물의 종류 : 강아지, 반려동물의 이름 : " << petName << endl;// 종류 이름
	cout <<petName<< "의 현재 에너지량 : " << Energy << endl;// 에너지
	cout << petName << "의 현재 친밀도량 : " << Love << endl;// 친밀도
	//cout << "엔딩까지의 남은 턴수 : " << RunTurn << endl;// 턴수  RunTurn은 정한 턴 
}
void Dog::printStatus(int i) {   // 함수 중복 & 오버라이딩
	cout << "=====================================================" << endl;
	cout << "반려동물의 종류 : 강아지, 반려동물의 이름 : " << petName << endl;// 종류 이름
	cout << petName << "의 현재 에너지량 : " << Energy << endl;// 에너지
	cout << petName << "의 현재 친밀도량 : " << Love << endl;// 친밀도
	cout << "엔딩까지의 남은 턴수 : " << RunTurn - i << endl;// 턴수  RunTurn은 정한 턴 
}
void Dog::eat(string type) {
	cout << petName << "(이)가" << type << " (을)를 먹습니다." << endl;
	Food Food(type);
	Energy += Food.getEnergy();
	Love += Food.getLove();
	
}
int Dog::act(string type) {
	cout << petName << "(이)가" << type << " (을)를 합니다." << endl;
	Act Act(type);
	Energy -= Act.disEnergy();
	Love += Act.getLove();

	if (type == "자기") {
		Energy += 40;
	}

	if (Energy <= 0) {
		return 0;
	}
	
}
int Dog::checkbreeding() {
	if (Love >= 200) {
		Love =  Love - 200;
		return 1;
	}
}
