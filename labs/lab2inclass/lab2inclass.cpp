#include <iostream>
#include <cmath>


int main() {
    double inner_part = std::pow(std::atan(std::sin(3.15 / 6.1)), 2) + 3.0 / 4.0;
    double result = std::sqrt(inner_part + 2.0 * M_PI * std::sqrt(inner_part + 2.0 * M_PI));
    std::cout << result << std::endl;
    return 0;
}
