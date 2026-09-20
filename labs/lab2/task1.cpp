#include <iostream>
using namespace std;

int main() {
    int abc;
    cin >> abc;

    int a = abc / 100;        // сотни
    int b = (abc / 10) % 10;  // десятки
    int c = abc % 10;         // единицы

    int bac = b * 100 + a * 10 + c;
    cout << bac << endl;

    return 0;
}
