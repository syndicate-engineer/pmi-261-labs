#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, min, pos = 1;
    cin >> min;
    int i = 2;
    while (i <= n) {
        cin >> a;
        if (a < min) {
            min = a;
            pos = i;
        }
        i++;
    }

    cout << pos << endl;
    return 0;
}
