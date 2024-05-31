#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    float T;
    cout << "Informe o valor T, para 2< T <=100: ";
    cin >> T;
    if(T > 2 && T <= 100)
    {
      T = (-2 * T) + 28;
     cout << "O valor W é: " << T << endl;
    }
    else
            cout << "Entrada inválida";
}

