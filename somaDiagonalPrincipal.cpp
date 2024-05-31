#include <iostream>
using namespace std;

void Le_vetor(int m[7][7])
{
cout << "Informe a matriz 7x7: ";
  for(int i=0; i<7; i++)
    for(int j=0; j<7; j++)
        cin >> m[i][j];
}

int soma_diagonal(int m[7][7])
{
  int soma = 0;
  for(int i=0; i<7; i++)
    {
        soma = soma + m[i][i];
    }
    return soma;
}
int main ()
{setlocale(LC_ALL, "Portuguese");
    int v[7][7];
    Le_vetor(v);
    cout << "Soma da diagonal principal: " << soma_diagonal(v) << endl;
    return 0;
}
