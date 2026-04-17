#include<iostream>
using namespace std;

int main() {
    char t[100];

    while (1) {
        cout << "끝내려면 OK를 입력하시오>>";
        cin.getline(t, 100);
        if (strcmp(t, "OK") == 0) {
            return 0;
        }
    }

}
