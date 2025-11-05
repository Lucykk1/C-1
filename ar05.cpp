#include <iostream>
#include <cmath> // для sqrt и pow

using namespace std;

int main() {
    int N;
    double x;
    cout << "Введите N: ";
    cin >> N;
    cout << "Введите x: ";
    cin >> x;

    double f = 0.0; // сумма

    for (int i = 1; i <= N; i++) {
        f += pow(1.0 / i, 3) * sqrt(x / i);
    }

    cout << "f(x) = " << f << endl;

    return 0;
}

#include <iostream>
#include <cmath> // для log()

using namespace std;

int main() {
    double a = 0.1, b = 1.0, h = 0.1; // границы и шаг
    double x, f;

    cout << " x\tf(x)" << endl;

    for (x = a; x <= b; x += h) {
        f = log(1 + x) / x;
        cout << x << "\t" << f << endl;
    }

    return 0;
}

