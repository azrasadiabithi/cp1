#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 int code1, units1, code2, units2;
    double price1, price2;
     cin >> code1 >> units1 >> price1;
     cin >> code2 >> units2 >> price2;
      double total = (units1 * price1) + (units2 * price2);
       cout << fixed << setprecision(2);
        cout << "Valor a pagar: R$ " << total << endl;
        return 0;

}
