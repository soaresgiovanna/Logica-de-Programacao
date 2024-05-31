#include <iostream>
using namespace std;
int main ()
{
    int d, m, a, k;
    cout << "Informe o dia" ;
    cin >> d;
    cout << "Informe o mes";
    cin >> m;
    cout << "Informe o ano";
    cin >> a;


    if(m == 1)
    {
    m = 13;
    a = a - 1;
    }

    if(m == 2)
     {
        m = 14;
        a = a-1;
     }

    k = d + (2 * m) + ((3 * (m + 1)) / 5) + a + (a / 4) - (a / 100) + (a / 400) + 2;
    if(k % 7 == 0)
        cout << "Sabado";
    if(k % 7 == 1)
        cout << "Domingo";
    if(k % 7 == 2)
        cout << "Segunda";
    if(k % 7 == 3)
        cout << "Terca";
    if(k % 7 == 4)
        cout << "Quarta";
    if(k % 7 == 5)
        cout << "Quinta";
    if(k % 7 == 6)
        cout << "Sexta";
    return 0;

}
