#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int sorted[3] = {A, B, C};
    sort(sorted, sorted + 3);

    cout << sorted[0] << endl;
    cout << sorted[1] << endl;
    cout << sorted[2] << endl;

    cout << endl;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}
