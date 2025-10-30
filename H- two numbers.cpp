#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    double result = A / B;

    cout << "floor " << (int)A << " / " << (int)B << " = " << (int)floor(result) << endl;
    cout << "ceil " << (int)A << " / " << (int)B << " = " << (int)ceil(result) << endl;
    cout << "round " << (int)A << " / " << (int)B << " = " << (int)round(result) << endl;

    return 0;
}
