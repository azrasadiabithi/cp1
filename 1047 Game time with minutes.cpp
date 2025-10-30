#include <iostream>
using namespace std;

int main() {
    int start_hour, start_min, end_hour, end_min;
    cin >> start_hour >> start_min >> end_hour >> end_min;

    int start_total_min = start_hour * 60 + start_min;
    int end_total_min = end_hour * 60 + end_min;

    int duration_min;

    if (end_total_min > start_total_min) {
        duration_min = end_total_min - start_total_min;
    } else {
        duration_min = (24 * 60 - start_total_min) + end_total_min;
    }

    if (duration_min == 0) {
        duration_min = 24 * 60;
    }

    int hours = duration_min / 60;
    int minutes = duration_min % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}
