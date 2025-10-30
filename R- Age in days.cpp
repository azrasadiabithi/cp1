#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int years = N / 365;
    int remaining = N % 365;
    int months = remaining / 30;
    int days = remaining % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
