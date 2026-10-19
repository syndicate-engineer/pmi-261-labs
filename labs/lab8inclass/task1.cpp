#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double a[15];
    a[0] = a[1] = 1;
    long double prod = 1;

    for (int i = 0; i <= 14; i++) {
        if (i >= 2)
            a[i] = a[i-2] + a[i-1] / powl(2, i-1) + a[i-1] / powl(2, i-1);
        prod *= a[i];
    }

    cout << prod << endl;
    return 0;
}
