#include <iostream>
#include <cmath>
using namespace std;
void Le_vetor(float l[7])
{
    cout << "Informe as 7 temperaturas: ";
    for(int i=0; i<7; i++)
        cin >> l[i];
}
float media(float med[7])
{
    float soma=0;
    for(int i=0; i<7; i++)
    {
       soma=soma+med[i];
    }
    return soma/7;
}
float desvio_padrao(float des[7])
{
    float m, n=7, soma=0;
    m = media(des);
    for(int i=0; i<7; i++)
    soma = soma + (pow((des[i] - m),2));

    return sqrt( soma /(n-1));
}
int main ()
{setlocale(LC_ALL, "Portuguese");

    float temp[7];
    Le_vetor(temp);
    cout << "A média das temperaturas é: " << media(temp) << endl;
    cout << "O desvio padrão é: " << desvio_padrao(temp) << endl;

    return 0;
}
