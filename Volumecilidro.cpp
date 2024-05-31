#include <iostream>
using namespace std;

int main ()
{

    float r, h, r2, V;

    cout << "informe o raio da base";
    cin >> r;

    cout << "Informe a altura do cilindro";
    cin >> h;

    r2 = r * r;

    V = r2 * h * 3,14;

    cout << "O volume é: " << V << endl;
}
