#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cout << "Enter your nubmer: ";
    cin >> n;

    n = abs(n);

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
