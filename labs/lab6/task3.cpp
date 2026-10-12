#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n quantity: ";
    cin >> n;

    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += 2 * i;
    }

    cout << "Sum of " << n << " even numbers = " << total << endl;
    return 0;
}
