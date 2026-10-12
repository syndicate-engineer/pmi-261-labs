#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = -1.0;
    double h = 0.1;

    cout << setw(10) << "x" << setw(10) << "y = x^2" << endl;

    while (x <= 1.0 + 1e-9) {
        cout << setw(10) << fixed << setprecision(2) << x
             << setw(10) << x * x << endl;
        x += h;
    }

    return 0;
}
