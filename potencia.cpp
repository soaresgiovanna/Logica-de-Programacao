#include <iostream>
#include <cmath>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
float x;
int y;
    cout << "Informe a base seguida do expoente: ";
    cin >> x >> y;

    cout<< pow(x,y) << endl;

   return 0;
}
