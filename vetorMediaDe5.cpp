#include <iostream>
using namespace std;
float leVetor(float []);
float imprimeMedia(float []);

int main ()
{setlocale(LC_ALL, "Portuguese");
     float vetor[5];
     leVetor(vetor);
     imprimeMedia(vetor);
    return 0;
}
float leVetor(float v[5])
{
    cout << "informe os valores: ";
    for(int i=0; i<5; i++)
        cin >> v[i];

}
float imprimeMedia(float v[5])
{

     float soma=0;
     for(int i=0; i<5; i++)
     soma=soma+ v[i];

     cout << "A média é: " << soma/5 << endl;
}
