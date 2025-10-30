#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary;
    cin >> salary;

    double tax = 0.0;

    if (salary > 4500.00) {
        tax += (salary - 4500.00) * 0.28;
        salary = 4500.00;
    }
    if (salary > 3000.00) {
        tax += (salary - 3000.00) * 0.18;
        salary = 3000.00;
    }
    if (salary > 2000.00) {
        tax += (salary - 2000.00) * 0.08;
    }

    if (tax == 0.0) {
        cout << "Isento" << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << "R$ " << tax << endl;
    }

    return 0;
}
