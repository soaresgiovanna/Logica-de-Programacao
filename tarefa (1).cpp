#include <iostream>
using namespace std;
int main()
{
    int V, A, F, P, aux, soma=0, cont=0;
    int v[4];

    for(int i=0; i<4; i++)
      cin >> v[i];

    for (int i=1; i<4; i++)
        for (int j=i+1; j< 4; j++)
    {
          if (v[i] > v[j])
        {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
        }
    }
    for(int i=1; i<4; i++)
    {
        if ((v[i]+ soma) <= v[0])
    {
        cont++;
        soma = soma+ v[i];
    }
    else
          break;
    }

    cout << cont;

    return 0;

}
