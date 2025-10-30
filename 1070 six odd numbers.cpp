#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;
    int current = X;
    if (X % 2 == 0) {
        current = X + 1;
    }
    for (int i = 0; i < 6; i++) {
        cout << current << endl;
        current += 2;
    }

    return 0;
}
