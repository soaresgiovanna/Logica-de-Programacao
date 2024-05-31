#include <iostream>
using namespace std;
 int somaDiagonalPrincipal(int m[4][4])
 {
    int soma=0;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
   {
       cin >> m[i][j];
        if (i == j)
        soma = soma + m[i][j];
   }
   return soma;
 }
 int main()
 {setlocale(LC_ALL, "Portuguese");
  int m[4][4];
  cout << "informe os valores para a matriz 4x4: ";
  cout << " A soma da diagonal principal é: " << somaDiagonalPrincipal(m);

    return 0;
 }
