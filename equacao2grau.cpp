#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float a, b, c, delta, x1, x2;
    cout << "Informe o a: ";
    cin >> a;
     cout << "Informe o b: ";
    cin >> b;
     cout << "Informe o c: ";
    cin >> c;


    if (a != 0)
    {
        delta = (b * b) + (- 4 * (a * c));

        if (delta == 0)
        {
            x1 = - b / (2 * a);
            cout << "x1 e: " << x1 << endl;
        }

        if (delta > 0)
        {
            x1 = (- b + sqrt(delta)) / (2 * a);
            x2 = (- b - sqrt(delta)) / (2 * a);

            cout << "x1 e: " << x1 << endl;
            cout << "x2 e: " << x2 << endl;
        }

        if (delta < 0)
        cout << "Nenhuma raiz real" << endl;
    }
    else
    cout << "Apresente um valor valido";
    return 0;
}
