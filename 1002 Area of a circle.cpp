#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
   double R ;
   cin >> R;
   double pi = 3.14159;
    double area = pi * R * R;
    cout << fixed << setprecision(4);
    cout << "A =";
    cout << area << endl;
}
