#include <iostream>
#include <string>
using namespace std;

#include "head.h"

string decideGoldAward(contest codingtest) {  // 최고의 점수를 가진 팀명 리턴
	string finteam;
	int finid = 0;
	int Max = codingtest.getscore(0);
	for (int i = 0; i < codingtest.getsize(); i++) {
		if (codingtest.getscore(i) > Max) {
			Max = codingtest.getscore(i);
			finid = i;
		}
	}
	
	finteam = codingtest.getteam(finid);
	return finteam;
}

int main() {

	contest codingtest(6);
	codingtest.read();
	string team = decideGoldAward(codingtest);
	cout << "금상은 " << team << " 팀 입니다" << endl;

	return 0;
}
