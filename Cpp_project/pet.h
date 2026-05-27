#pragma once
#include <iostream>
#include <string>

class pet {
	string name;  // 이름 저장 string
	int Energy;   // 에너지 변수
	int love;     // 친밀도 변수
	int bad;      // 경고 변수
protected:
	void eatFood();  // 음식 먹기
	void doAct();   // 활동 하기

};
