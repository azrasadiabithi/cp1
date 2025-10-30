#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int mini = min({A, B, C});
    int maxi = max({A, B, C});

    cout << mini << " " << maxi << endl;

    return 0;
}
