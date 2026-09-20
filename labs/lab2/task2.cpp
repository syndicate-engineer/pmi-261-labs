#include <iostream>
using namespace std;

int main() {
    /* Дано выражение: x − y²/3! + z²/5! */

    double x, y, z;
    cin >> x >> y >> z;

    /* факториал 3! = 1 * 2 * 3 = 6, 5! = 1 * 2 * 3 * 4 * 5 = 120 */

    double result = x - (y * y) / 6 + (z * z) / 120;

    cout << result << endl;
    return 0;
}
