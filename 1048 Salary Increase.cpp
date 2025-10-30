#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double salary;
    cin >> salary;
    double increase_rate;
    double increase_amount;
    double new_salary;
    if (salary >= 0 && salary <= 400.00) {
        increase_rate = 0.15;
    }
    else if (salary >= 400.01 && salary <= 800.00) {
        increase_rate = 0.12;
    }
    else if (salary >= 800.01 && salary <= 1200.00) {
        increase_rate = 0.10;
    }
    else if (salary >= 1200.01 && salary <= 2000.00) {
        increase_rate = 0.07;
    }
    else {
        increase_rate = 0.04;
    }
    increase_amount = salary * increase_rate;
    new_salary = salary + increase_amount;
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << increase_amount << endl;
    cout << "Em percentual: " << int(increase_rate * 100) << " %" << endl;

    return 0;
}
