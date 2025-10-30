#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int code, quantity;
    cin >> code >> quantity;

    double total;
    switch (code) {
        case 1:
            total = 4.00 * quantity;
            break;
        case 2:
            total = 4.50 * quantity;
            break;
        case 3:
            total = 5.00 * quantity;
            break;
        case 4:
            total = 2.00 * quantity;
            break;
        case 5:
            total = 1.50 * quantity;
            break;
        default:
            total = 0.00;
            break;
    }
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}
