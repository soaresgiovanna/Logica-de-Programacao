#include <iostream>
using namespace std;
int main ()
{
    int id;
    cout << "Informe sua idade";
    cin >> id;
    if(id >= 0)
    {
        if(id >= 0 && id <= 19)
        cout << "Jovem";
         if(id >= 20 && id <= 59)
        cout << "Adulto";
         if(id >= 60)
        cout << "Idoso";
    }
    else cout << "Idade invalida!";
    return 0;
}
