#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    cout << N << endl;
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++) {
        int count = N / banknotes[i];
        N = N % banknotes[i];
        cout << count << " nota(s) de R$ " << banknotes[i] << ",00" << endl;
    }

    return 0;
}
