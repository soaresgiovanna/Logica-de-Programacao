#include <iostream>
#include <cmath>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    int op;
    float expoente, base, num;
    cout << "Opções: " << endl << "1 - Calcular potência de um número por outro" << endl << "2 - Calcular raiz quadrada de um número" << endl << "0 - sair" << endl;
    do {
         cin >> op;
         if(op == 2)
           {
            cout << "Informe o número: ";
            cin >> num;
            cout << "Raiz: " << sqrt(num);
           }
       else if(op == 1)
           {
            cout << "Informe a base e o expoente: ";
            cin >> base >> expoente;
            cout << "Potência: " << pow(base, expoente);
           }
       else if(op < 0 || op > 3)
            cout << "Opcão inválida" << endl;
    }while(op == 1 || op == 2);
        if(op == 0)
            cout << "Fim";
    return 0;
}
