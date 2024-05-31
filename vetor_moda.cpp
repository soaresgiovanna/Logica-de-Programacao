#include <iostream>
using namespace std;
void Le_vetor(int vetor[10])
{
    cout << "informe os dez valores: ";
    for(int i=0; i<10; i++)
        cin >> vetor[i];
}
void moda(int moda[10])
{
    int m[10];
    for(int i=0; i<10; i++)
        for(int j=1 ; (j+i)<10; j++)
    {
        if(moda[i] == moda[j])
          m[i]= moda[i];
    }
   for(int i=0; i<10; i++)
    {
        for(int i=0; i<10; i++)
          cout << m[i];
    }
}
int main ()
{setlocale(LC_ALL, "Portuguese");
    int vet[10];
    Le_vetor(vet);
    moda(vet);

    return 0;
}
