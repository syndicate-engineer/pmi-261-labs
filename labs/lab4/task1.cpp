#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    int N;
    if (x > 0 && y > 0) N = 1;
    else if (x < 0 && y > 0) N = 2;
    else if (x < 0 && y < 0) N = 3;
    else N = 4;

    cout << N << endl;
    return 0;
}
