#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int inCount = 0, outCount = 0;

    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;

        if (X >= 10 && X <= 20) {
            inCount++;
        } else {
            outCount++;
        }
    }

    cout << inCount << " in" << endl;
    cout << outCount << " out" << endl;

    return 0;
}
