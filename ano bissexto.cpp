#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    int a;
    cout << "Informe o ano: ";
    cin >> a;
    if (a > 0)
    {
        if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
            cout << a << " é ano bissexto";
        else
            cout << a << " nãõ é ano bissexto";
    }
    else
    cout << "Número inválido";

    return 0;
}
