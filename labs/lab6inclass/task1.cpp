#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    std::cout << std::fixed;
    std::cout << "x" << "y = x^2" << std::endl;
    std::cout << "--------------------------" << std::endl;
    for (double x = -1.0; x <= 1.0 + 1e-9; x += 0.1) {
        double y = x * x;
        std::cout << std::setprecision(1) << std::setw(10) << x
                  << std::setprecision(2) << std::setw(15) << y << std::endl;
    }

    return 0;
}
