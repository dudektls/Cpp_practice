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

	Dog* puppyList[10] = {};
	int puppycount = 0;

	cout << "지금 부터 펫 키우기 게임을 시작하겠습니다." << endl;
	cout << "반려동물의 이름을 정해주세요 : ";
	cin >> Name;
	cout << "** 반려동물의 종류는 강아지로 고정입니다. **" << endl;
	cout << "진행할 게임의 턴 수를 정해주세요 : ";
	cin >> gameturn;
	Pet pet(Name, gameturn);
	Pet* mypet = new Dog(Name, gameturn);  // 업캐스팅
	cout << "현재 반려동물의 스탯입니다." << endl;
	mypet->printStatus();
	cout << "지금 부터 게임을 시작합니다. 행운을 빕니다." << endl;  //fin

	// 게임 구현부

	for (int i = 1; i <= gameturn; i++) {   // 날짜(턴수)를 위한 반복문

		cout << "하루가 시작되었습니다." << endl;
		int EatCount = 0;
		int ActCount = 0;

		for (int j = 0; j < 6; j++) {  // 하루 일과를 위한 반복문

			cout << "먹이와 활동중 하나를 선택해주세요 : ";
			cin >> doType;

			if (doType == "먹이") {  //먹이 로직 Fin
				cout << "(먹이 종류 : 일반먹이, 프리미엄먹이, 간식)" << endl;
				cout << "어떤 먹이를 먹습니까? : ";
				cin >> foodtype;
				mypet->eat(foodtype);

				if (mypet->checkbreeding() == 1) {  // 친밀도 체크후 200이상시 새끼 낳는 로직
					if (puppycount < 10) {
						puppyList[puppycount] = new Dog(*mypet);
						puppycount++;
						cout << Name << " 의 친밀도가 200 이상이 되어 총 " << puppycount << " 마리 새끼를 낳았습니다. " << endl;

					}

				}

				mypet->printStatus();  // 먹이로 인한 에너지, 친밀도 상승 실시간 출력

				EatCount++;
				cout << "남은 먹이 횟수 : " << 3 - EatCount << endl;

				if (EatCount >= 3) {
					break;  // 먹이 횟수 소진시 턴 마감
				}
			}

			else if (doType == "활동") {  // 활동 로직 Fin
				cout << "(활동 종류 : 산책, 놀이, 씻기, 자기)" << endl;
				cout << "어떤 활동을 합니까? : ";
				cin >> acttype;

				int Actresult = mypet->act(acttype);

				if (mypet->checkbreeding() == 1) {  // 친밀도 체크후 200이상시 새끼 낳는 로직
					if (puppycount < 10) {
						puppyList[puppycount] = new Dog(*mypet);
						puppycount++;
						cout << Name << " 의 친밀도가 200 이상이 되어 총 " << puppycount << " 마리 새끼를 낳았습니다. " << endl;

					}

				}

				mypet->printStatus(); // 활동으로 인한 에너지, 친밀도 상승&감소 실시간 출력

				ActCount++;
				cout << "남은 활동 횟수 : " << 2 - ActCount << endl;

				if (acttype == "자기") {
					cout << Name << "이 자기 시작합니다." << endl;

					break;
				}

				if (ActCount >= 2) {

					break;  // 활동 횟수 소진시 턴 마감
				}

				else if (Actresult == 0) {
					cout << Name << " (이)의 에너지가 모두 소진되어 탈진되었습니다." << endl;

					break;
				}


			}

			else {
				cout << "잘못되었습니다. 다시한번 입력해주세요" << endl;
				j--;
			}



		}

		cout << "하루가 끝났습니다." << endl << " 오늘 하루 " << Name << "의 스탯입니다" << endl; ;  // 일과 끝 최종스탯 출력
		mypet->printStatus(i);

		if (i == gameturn) {
			cout << "게임이 끝났습니다." << Name << "의 최종 스탯에 따라 엔딩이 출력됩니다." << endl;
		}
		else {
			cout << "다음날로 넘어갑니다." << endl;
		}

	}

	// 엔딩부
	cout << "=======================" << endl;

	int totalLove = 0;
	int motherLove = mypet->getLove();  // 남은 친밀도

	totalLove = (puppycount * 200) + motherLove;

	int Result = (double)totalLove / gameturn;

	if (Result >= 80.0) { //  턴당 평균 80점 이상 (상)
		cout << " 최고의 패밀리 엔딩! " << endl;

	}
	else if (Result >= 40.0) { //  턴당 평균 40점 이상 (중)
		cout << "평범하고 따뜻한 엔딩 " << endl;

	}
	else {
		cout << " 씁쓸한 독립 엔딩 " << endl;
	}

	//결말부

	for (int i = 0; i < puppycount; i++) {
		delete puppyList[i];
	}

	delete mypet;  // 주 객체 삭제
	cout << "고생하셨습니다. 게임 종료합니다."; // 전체 게임 Fin


	return 0;

}
