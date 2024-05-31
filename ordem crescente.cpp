#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    int a, b, c, aux;
    cout << "Entre com os três valores: ";
    cin >> a >> b >> c;
    if(a > b)
        {aux= a;
        a = b;
        b = aux;
        }
    if (a > c)
        {aux = a;
        a = c ;
        c = aux;
        }
    if(b > c)
        {aux = b;
        b = c;
        c = aux;
        }
    cout << " " << a << " " << b << " " << c << endl;

    return 0;
}
