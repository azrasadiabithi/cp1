#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int evenCount = 0;

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];

        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }

    cout << evenCount << " valores pares" << endl;

    return 0;
}
