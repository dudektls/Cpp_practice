#include <string>
#include<iostream>
using namespace std;

int main() {
    string day;
    cout << "3월 1일은 무슨 요일입니까>>";
    cin >> day;
    int n = 0;
    int Day;
    cout << "일" << '\t' << "월" << '\t' << "화" << '\t' << "수" << '\t' << "목" << '\t' << "금" << '\t' << "토" << endl;
    if (day == "일") {
        n = 0;
    }
    else if (day == "월") {
        n = 1;
    }
    else if (day == "화") {
        n = 2;
    }
    else if (day == "수") {
        n = 3;
    }
    else if (day == "목") {
        n = 4;
    }
    else if (day == "금") {
        n = 5;
    }
    else if (day == "토") {
        n = 6;
    }

    for (int i = 0; i < n; i++) {
        cout << '\t';
    }
    for (int Day = 1; Day <= 31; Day++) {
        cout << Day << '\t';
        if ((n + Day) % 7 == 0) {
            cout << endl;
        }

    }
    return 0;
}
