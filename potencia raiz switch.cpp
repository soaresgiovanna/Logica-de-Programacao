#include <iostream>
#include <cmath>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    int op;
    float expoente, base, num;
    cout << "Opções: " << endl << "1 - Calcular potência de um número por outro" << endl << "2 - Calcular raiz quadrada de um número" << endl << "0 - sair" << endl;
    cin >> op;
    switch(op){
        case 1:
            cout << "Informe a base e o expoente: ";
            cin >> base >> expoente;
            cout << "Potência: " << pow(base, expoente);
            break;
        case 2:
            cout << "Informe o número: ";
            cin >> num;
            cout << "Raiz: " << sqrt(num);
            break;
        case 0:
            cout << "Fim";
            break;
        default:
            cout << "Opcão inválida" << endl;
            break;
}
    return 0;
}
