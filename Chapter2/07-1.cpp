#include<iostream>
using namespace std;

int main() {
    char a[100];
    char b[100];

    cout << "문자열을 입력하시오>>";
    cin >> a;
    cout << "문자열을 입력하시오>>";
    cin >> b;

    if (strcmp(a, b) == 0) {
        cout << "Yes";
    }
    else
        cout << "NO";
    return 0;
}
