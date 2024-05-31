#include <iostream>
using namespace std;
string dia(int d)
{
    if(d == 0)
        return "Sábado"; //para imprimir use cout<< no lugar de return
    else if(d == 1)
        return "Domingo";
    else if(d == 2)
        return "Segunda";
    else if(d == 3)
        return "Terça";
    else if(d == 4)
        return "Quarta";
    else if(d == 5)
        return "Quinta";
    else if(d == 6)
        return "Sexta";
}
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int d;
    cout << "Informe o dia da semana de 0 a 6: ";
    cin >> d;
    if(d >=0 && d<7)
    {
       cout << dia(d);

    }
    else
        cout << "Número inválido";

    return 0;
}
