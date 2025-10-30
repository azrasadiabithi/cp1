#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    const double PI = 3.14159;


    cin >> A >> B >> C;


    double triangleArea = (A * C) / 2.0;
    double circleArea = PI * pow(C, 2);
    double trapeziumArea = ((A + B) * C) / 2.0;
    double squareArea = pow(B, 2);
    double rectangleArea  = A * B;


    cout << fixed << setprecision(3);


    cout << "TRIANGULO: " << triangleArea << endl;
    cout << "CIRCULO: " << circleArea << endl;
    cout << "TRAPEZIO: " << trapeziumArea << endl;
    cout << "QUADRADO: " << squareArea << endl;
    cout << "RETANGULO: " << rectangleArea << endl;

    return 0;
}
