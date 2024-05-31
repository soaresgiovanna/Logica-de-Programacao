#include <iostream>
using namespace std;
void Le_vetor(int idade[10])
{
    cout << "Informe as dez idades: ";
    for(int i=0; i<10; i++)
        cin >> idade[i];
}
int media(int idade[10])
{
    int soma=0;
    for(int i=0; i<10; i++)
        soma = soma + idade[i];

    return soma/10;
}
int menor(int idade[10])
{
    int menor;
    for(int i=0; i<10; i++)
    {
        if (i==0)
            {
               menor=idade [i];
            }
        else if(idade[i] < menor)
            menor = idade [i];
    }
    return menor;
}
int maior(int idade[10])
{
    int maior;
    for(int i=0; i<10; i++)
    {
        if (i==0)
            {
               maior=idade [i];
            }
        else if(idade[i] > maior)
            maior = idade [i];
    }
    return maior;
}
void faixa(int idade[10])
{
    int j=0, a=0, id=0;
    for(int i=0; i<10; i++)
    {   if(idade[i] < 20)
        j= j+1;
        else if (idade[i] > 19 && idade[i] < 60)
        a= a+1;
        else if(idade[i] > 59)
        id= id+1;
    }
    cout << " Jovens: " << j << endl << " Adultas: " << a << endl << " Idosas: " << id << endl;
}

int main()
{setlocale(LC_ALL, "Portuguese");
    int v[10];
    Le_vetor(v);
    cout << "A mais nova e a mais velha é, repectivamente: " << menor(v) << " e " << maior(v) << endl;
    cout << "A média das idades são: " << media(v) << endl;
    faixa(v); //quando é void n precisa de cout
              // return só retorna um valor

    return 0;
}
