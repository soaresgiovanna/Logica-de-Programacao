#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    cout << "Informe o dividendo e o divisor, respectivamente: ";
    cin >> x >> y;
    if(x < 0 || y < 1)
        cout << "Entrada inválida!";
    else if(x % y == 0)
        cout << "o número " << x << " é divisível por " << y << endl;
    else
        cout << "O número " << x << " não é divisível por " <<  y  << endl;
    return 0;
}
