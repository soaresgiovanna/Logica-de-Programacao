#include <iostream>
using namespace std;

void leVetor(float v[8]);
void inverteVetor(float [8]);

int main()
{setlocale(LC_ALL, "Portuguese");

  float vet[8];
  leVetor(vet);
  inverteVetor(vet);

  return 0;
}
void leVetor(float v[8])
{
    for (int indice=0; indice<8; indice++)
    {
        cout << "informe o v[" << indice << "]: ";
        cin >> v[indice];
    }
}

void inverteVetor(float v[8])
{
    float aux;
    int p = 7;
    for(int indice=0; indice < 8; indice++)
    {
        if(indice < 4 )
        {
            aux = v[indice];
            v[indice] = v[indice + p];
            v[indice+p] = aux;
            p = p-2;
        }
        cout << v[indice] << " ";
    }
}
