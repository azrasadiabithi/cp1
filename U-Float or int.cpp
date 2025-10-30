#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    size_t dotPos = N.find('.');

    if (dotPos != string::npos) {

        string integerPart = N.substr(0, dotPos);
        string decimalPart = N.substr(dotPos);

        bool isAllZeros = true;
        for (size_t i = 1; i < decimalPart.length(); i++) {
            if (decimalPart[i] != '0') {
                isAllZeros = false;
                break;
            }
        }

        if (isAllZeros) {
            cout << "int " << integerPart << endl;
        } else {
            cout << "float " << integerPart << " " << decimalPart << endl;
        }
    } else {

        cout << "int " << N << endl;
    }

    return 0;
}
