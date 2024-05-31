#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n, cont, fat;
    cout << "Informe o valor: ";
    cin >> n;
    fat = n;
    if (n == 0)
        cout << "0! = 1 ";
    else if (n < 0)
        cout << "Inválido";
    else
    {
    for(cont=1; cont<n; cont++)
        fat = fat * (n - cont);
        cout << "Fatorial = " << fat << endl;
    }

    return 0;
}
