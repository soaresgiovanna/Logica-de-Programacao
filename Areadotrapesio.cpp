#include <iostream>
using namespace std;

int main ()
{
    float h, B, b, d2, soma, mult;

    cout << "Informe a altura do trapezio";
    cin >> h;

    cout << "Informe a base menor";
    cin >> b;

    cout << "Informe a base maior";
    cin >> B;

    soma = b + B;
    mult = h * soma;
    d2 = mult / 2;

    cout << "A area do trapesio é: " << d2 << endl;


}
