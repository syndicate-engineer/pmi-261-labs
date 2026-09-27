#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    if (x + y + z < 1) {
        // наименьшее из трёх -> полусумма двух других
        if (x < y && x < z)      x = (y + z) / 2;
        else if (y < x && y < z) y = (x + z) / 2;
        else                     z = (x + y) / 2;
    } else {
        // меньшее из x и y -> полусумма двух оставшихся
        if (x < y) x = (y + z) / 2;
        else       y = (x + z) / 2;
    }

    cout << x << " " << y << " " << z << endl;
    return 0;
}
