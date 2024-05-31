#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float a, b, c, b2, m4, ac, delta, d2, x1, x11, x2, x22;

    cout << "Informe o a";
    cin >> a;
    cout << "Informe o b";
    cin >> b;
    cout << "Informe o c";
    cin >> c;

    b2 = b * b;
    ac = a* c;
    m4 = -4 * ac;
    delta = b2 + m4;

    d2 = sqrt(delta);
     x1 = (- b) + d2;
    x11 = x1 /(2 * a);
    x2 = - b - d2;
    x22 = x2 / (2 * a);

    cout << "X1 e: " << x11 << endl;
    cout << "X2 e: " << x22 << endl;
}
