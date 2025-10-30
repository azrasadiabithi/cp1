#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool result;

    switch(S) {
        case '<':
            result = (A < B);
            break;
        case '>':
            result = (A > B);
            break;
        case '=':
            result = (A == B);
            break;
    }

    if (result) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }

    return 0;
}
