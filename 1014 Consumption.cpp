#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x;
    double y;
    cin >> x >> y ;
    double average =x/y;
    cout <<fixed <<setprecision(3);
    cout <<average<< "km/l"<< endl;
    return 0;
}
