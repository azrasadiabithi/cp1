#include <iostream>
using namespace std;

int main() {
    string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int month;
    cin >> month;

    if (month >= 1 && month <= 12) {
        cout << months[month - 1] << endl;
    }

    return 0;
}
