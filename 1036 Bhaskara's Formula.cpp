#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double A, B, C;
    cin >> A >> B >> C;
    double discriminant = B * B - 4 * A * C;
    if (A == 0 || discriminant < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    double sqrt_discriminant = sqrt(discriminant);
    double R1 = (-B + sqrt_discriminant) / (2 * A);
    double R2 = (-B - sqrt_discriminant) / (2 * A);
    cout << fixed << setprecision(5);
    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;

    return 0;
}
