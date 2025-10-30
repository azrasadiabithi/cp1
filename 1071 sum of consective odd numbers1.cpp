#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int start = min(X, Y);
    int end = max(X, Y);

    int sum = 0;

    int firstOdd = start + 1;
    if (firstOdd % 2 == 0) {
        firstOdd++;
    }

    for (int i = firstOdd; i < end; i += 2) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}
