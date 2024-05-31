#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
float p;
    cout << "Polegadas para centímetros: ";
    cin >> p;
    for(p= 1; p<21; p++)
    {
        cout<< p << " = " << p*2.54  << endl;;
    }
   return 0;
}
