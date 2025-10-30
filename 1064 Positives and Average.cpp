#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double numbers[6];
    int positiveCount = 0;
    double positiveSum = 0.0;

    for (int i = 0; i < 6; i++) {
        cin >> numbers[i];

        if (numbers[i] > 0) {
            positiveCount++;
            positiveSum += numbers[i];
        }
    }

    double average = 0.0;
    if (positiveCount > 0) {
        average = positiveSum / positiveCount;
    }

    cout << positiveCount << " valores positivos" << endl;
    cout << fixed << setprecision(1) << average << endl;

    return 0;
}
