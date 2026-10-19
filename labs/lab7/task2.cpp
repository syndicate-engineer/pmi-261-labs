#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, sum = 0, i = 0;
    do {
        cin >> x;
        if (x % 5 == 0 && x % 7 != 0)
            sum += x;
        i++;
    } while (i < n);

    cout << sum << endl;
    return 0;
}
