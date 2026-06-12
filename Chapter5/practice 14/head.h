#pragma once
#include <iostream>
#include <string>
using namespace std;

class contest {
	string* teams;
	int* scores;
	int size;
public:
	contest(int size);  // size만큼 team & score 메모리 할당
	contest(const contest& src);  // 복사생성자
	~contest();  // 소멸자
	void read();  // 팀 수 만큼 팀명과 점수 입력
	int getsize() { return size; }
	int getscore(int index) { return scores[index]; }
	string getteam(int index) { return teams[index]; }
};
