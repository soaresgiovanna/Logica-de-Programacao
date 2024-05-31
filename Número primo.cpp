#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int x, q, aux=0;
    cout << "Informe o número: ";
    cin >> x;
    if (x == 1 || x == 2)
        cout << x << " não é primo";

    else if (x > 2)
    {
        for(q = x - 1; q > 1; q--)
        {
            if (x%q==0)
            {
                cout << x << " não é primo";
                q = 1;
                aux = 1;
            }
        }
        if (q == 1 && aux == 0)
            cout << x << " é primo" << endl;
    }
    else
        cout << "Número inválido";

    return 0;
}
