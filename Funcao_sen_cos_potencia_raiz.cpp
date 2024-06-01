#include <iostream>
#include <cmath>
using namespace std;
int menu(int op)
{
    cout << "Menu de opções:" << endl << "1 – Calcular o seno de um ângulo em graus" << endl << "2 – Calcular o cosseno de um ângulo em graus" << endl << "3 – Calcular a potência de um número por outro" << endl << "4 – Calcular a raiz quadrada de um número" << endl;
    cin >> op;
    return op;
}
int main()
{setlocale(LC_ALL, "Portuguese");
    int opcao;
    float resultado, x, y;
    opcao=menu(opcao);
    switch (opcao)
    { case 1:
        cout << "Informe o ângulo: ";
        cin >> x;
        cout << sin(x * M_PI / 180.0);
        break;

    case 2:
         cout << "Informe o ângulo: ";
         cin >> x;
         cout << cos(x * M_PI / 180.0);
         break;

    case 3:
        cout << "Informe o número e seu expoente: ";
        cin >> x >> y;
        cout << pow(x,y);
        break;

    case 4:
        cout << "informe o número: ";
        cin >> x;
        cout << sqrt(x);
        break;

    default:
        cout << "Opção inválida";
    }

     return 0;
}
