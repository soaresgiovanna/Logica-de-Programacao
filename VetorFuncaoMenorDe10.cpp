#include <iostream>
using namespace std;
int leVetor(int v[]); //esse nome "v" não é importante . por protótipo
int imprimeMaior(int v[]);
int main()
{setlocale(LC_ALL, "Portuguese");
    int vetor[10];

    leVetor(vetor); //coloque apenas o nome do vetor e a "variavel, sem o cin"
    imprimeMaior(vetor);
    return 0;
}
int leVetor(int v[10])
{
    cout << "Informe os números: ";
    for(int i=0; i<10; i++)
        cin >> v[i];
}
int imprimeMaior(int v[10])
{
    int m;
     for(int i=0; i<10; i++)
     {
         if(i==0)
            m = v[i];
         if(v[i] < m)
            m =v[i];
     }
     cout << "O menor é: " << v[0];
}
