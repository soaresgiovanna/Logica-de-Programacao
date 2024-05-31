#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");

    int I;
    cout << "Informe a idade: ";
         cin >> I;
    if(I>64)
        cout << "Idoso";
    else if(I > 17)
        cout << "Adulto";
    else if(I > -1)
        cout << "Jovem";
    else
        cout << "Idade inválida";
             return 0;
}
