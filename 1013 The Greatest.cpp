#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int  Maior_AB = (a+b+abs(a-b))/2;
    int  Maior = (Maior_AB+c+abs(Maior_AB-c))/2;
    cout << Maior <<"eh o maior"<<endl;
    return 0;
}
