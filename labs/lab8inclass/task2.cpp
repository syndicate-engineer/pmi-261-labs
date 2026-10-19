#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x = 1.0;
    double y = 1.0;
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        if (i > 1) {
            // x_i = 0.3 * x_{i-1},  y_i = x_{i-1} + y_{i-1}
            double prevX = x;
            double prevY = y;
            x = 0.3 * prevX;
            y = prevX + prevY;
        }
        sum += x / (1.0 + fabs(y));
    }
    cout << fixed << setprecision(6);
    cout << sum << endl;
    return 0;
}
