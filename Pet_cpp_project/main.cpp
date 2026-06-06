#include<iostream>
#include<string>
using namespace std;

#include "Pet.h"
#include "Dog.h"
#include "Food.h"
#include "Act.h"

int main() {
	string Name;
	int gameturn = 0;
	string doType;
	string foodtype;
	string acttype;

	cout << "지금 부터 펫 키우기 게임을 시작하겠습니다." << endl;
	cout << "반려동물의 이름을 정해주세요 : ";
	cin >> Name;
	cout << "** 반려동물의 종류는 강아지로 고정입니다. **" << endl;
	cout << "진행할 게임의 턴 수를 정해주세요 : ";
	cin >> gameturn;
	Pet pet(Name, gameturn);
	Pet* mypet = new Dog(Name,gameturn);
	cout << "현재 반려동물의 스탯입니다." << endl;
	mypet->printStatus();
	cout << "지금 부터 게임을 시작합니다. 행운을 빕니다." << endl;  //fin
	
	// 게임 구현부

	for (int i = 1; i <= gameturn; i++) {   // 날짜(턴수)를 위한 반복문

		cout << "하루가 시작되었습니다." << endl;

		for (int j = 0; j < 6; j++) {  // 하루 일과를 위한 반복문

			cout << "먹이와 활동중 하나를 선택해주세요 : ";
			cin >> doType;

			if (doType == "먹이") {
				cout << "(먹이 종류 : 일반먹이, 프리미엄먹이, 간식)" << endl;
				cout << "어떤 먹이를 먹습니까? : ";
				cin >> foodtype;
				mypet->eat(foodtype);
				mypet->printStatus();  // 먹이로 인한 에너지, 친밀도 상승 실시간 출력
			}

			else if (doType == "활동") {
				cout << "(활동 종류 : 산책, 놀이, 씻기, 자기)" << endl;
				cout << "어떤 활동을 합니까? : ";
				cin >> acttype;
				mypet->act(acttype);
				mypet->printStatus(); // 활동으로 인한 에너지, 친밀도 상승&감소 실시간 출력
				if (acttype == "자기") {
					cout << Name << "이 자기 시작합니다." << endl;
					break;
				}
			}

			else {
				cout << "잘못되었습니다. 다시한번 입력해주세요" << endl;
				j--;
			}

		}
			cout << "하루가 끝났습니다. 오늘 하루 " << Name << "의 스탯입니다";  // 일과 끝 최종스탯 출력
			mypet->printStatus(i);

			if (i == gameturn) {
				cout << "게임이 끝났습니다." << Name << "의 최종 스탯에 따라 엔딩이 출력됩니다.";
			}
			else {
				cout << "다음날로 넘어갑니다." << endl;
			}

	}

	// 엔딩부

	//결말부
	delete mypet;
	cout << "고생하셨습니다. 게임 종료합니다."; // 전체 게임 Fin

	
	return 0;
}
