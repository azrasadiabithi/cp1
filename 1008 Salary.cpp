#include <iostream>
 #include <iomanip>
 using namespace std;
int main() {

    int  num , hour;
    double wage;
    cin >> num >> hour >> wage ;
    double salary = hour * wage ;
     cout << fixed << setprecision(2);
    cout <<"NUMBER = " << num << endl;
    cout << "SALARY = U$ " << salary << endl;
}
