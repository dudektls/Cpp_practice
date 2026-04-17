#include<iostream>
using namespace std;

int main() {
    char t[100];
    cout << "빈칸없이 문자열을 입력하세요>>";
    cin >> t;
    int n = strlen(t);
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }

    return 0;
}
