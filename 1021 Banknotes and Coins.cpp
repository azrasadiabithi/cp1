#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double N;
    cin >> N;


    int total_cents = round(N * 100);


    int notes[] = {10000, 5000, 2000, 1000, 500, 200};

    int coins[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;

    for (int i = 0; i < 6; i++) {
        int count = total_cents / notes[i];
        total_cents %= notes[i];
        cout << count << " nota(s) de R$ " << fixed << setprecision(2) << notes[i] / 100.0 << endl;
    }

    cout << "MOEDAS:" << endl;

    for (int i = 0; i < 6; i++) {
        int count = total_cents / coins[i];
        total_cents %= coins[i];
        cout << count << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] / 100.0 << endl;
    }

    return 0;
}
