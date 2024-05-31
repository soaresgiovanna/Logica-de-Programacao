#include <iostream>
using namespace std;
int main ()
{
    int x, y, z;
    cout << "Informe a primeira medida de um dos lados do triangulo";
    cin >> x;
     cout << "Informe a segunda";
    cin >> y;
     cout << "E agora a terceira";
    cin >> z;
    if(x < y+z && y < x+z && z < x+y)
      {
        if(x == z && z != y || x == y && y != z || z == y && y != x)
              cout << "triangulo isoceles";
        else if(x == z && z == y)
              cout << "triangulo equilatero";
             else cout << "triangulo escaleno";
      }

    else cout << "As medidas nao formam um triangulo!";
return 0;
}
