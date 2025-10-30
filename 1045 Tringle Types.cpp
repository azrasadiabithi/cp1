#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    double sides[3];

    cin >> sides[0] >> sides[1] >> sides[2];

    sort(sides, sides + 3, greater<double>());

    double A = sides[0];
    double B = sides[1];
    double C = sides[2];

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {

        double A_sq = A * A;
        double BC_sq = B * B + C * C;

        if (fabs(A_sq - BC_sq) < 1e-9) {
            cout << "TRIANGULO RETANGULO" << endl;
        } else if (A_sq > BC_sq) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        // Check triangle type by sides
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (A == B || A == C || B == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
