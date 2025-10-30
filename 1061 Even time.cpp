#include <iostream>
#include <string>
using namespace std;

int main() {
    string temp;
    int start_day, end_day;
    int start_h, start_m, start_s, end_h, end_m, end_s;

    cin >> temp >> start_day;
    cin >> start_h >> temp >> start_m >> temp >> start_s;

    cin >> temp >> end_day;
    cin >> end_h >> temp >> end_m >> temp >> end_s;

    long long start_total_seconds = start_day * 86400LL + start_h * 3600LL + start_m * 60LL + start_s;
    long long end_total_seconds = end_day * 86400LL + end_h * 3600LL + end_m * 60LL + end_s;

    long long duration_seconds = end_total_seconds - start_total_seconds;

    int days = duration_seconds / 86400;
    duration_seconds %= 86400;
    int hours = duration_seconds / 3600;
    duration_seconds %= 3600;
    int minutes = duration_seconds / 60;
    int seconds = duration_seconds %= 60;

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
