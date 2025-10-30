#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 2; i <= N; i += 2) {
        int square = i * i;
        cout << i << "^2 = " << square << endl;
    }

    return 0;
}
