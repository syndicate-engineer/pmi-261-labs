#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    // Вывод исходного уравнения
    cout << "Equation: ";
    bool first = true;
    if (a != 0) {
        cout << (a == 1 ? "" : (a == -1 ? "-" : to_string(a))) << "x^2";
        first = false;
    }
    if (b != 0) {
        if (!first) cout << (b > 0 ? " + " : " - ");
        else if (b < 0) cout << "-";
        cout << (abs(b) == 1 ? "" : to_string(abs(b))) << "x";
        first = false;
    }
    if (c != 0 || first) {
        if (!first) cout << (c > 0 ? " + " : " - ");
        else if (c < 0) cout << "-";
        cout << abs(c);
    }
    cout << " = 0" << endl;

    // Проверка корректности
    if (a == 0 && b == 0 && c != 0) {
        cout << "Error: incorrect equation!" << endl;
        return 0;
    }

    // Тождество 0 = 0
    if (a == 0 && b == 0 && c == 0) {
        cout << "This equation has an infinite number of roots." << endl;
        return 0;
    }

    // Линейное уравнение bx + c = 0
    if (a == 0) {
        double x = -c / b;
        cout << "This equation has one real root:  x = " << x << endl;
        return 0;
    }

    // Квадратное уравнение
    double D = b * b - 4 * a * c;

    if (D < 0) {
        cout << "D<0, this equation has no real roots." << endl;
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "This equation has two equal real roots:  x_1,2 = " << x << endl;
    } else {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "This equation has two real roots: x_1 = " << x1
             << " x_2 = " << x2 << endl;
    }

    return 0;
}
