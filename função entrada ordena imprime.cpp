#include <iostream>
using namespace std;

void entrada (int &a, int &b, int &c)
{
    cout << "Entre com 3 numeros inteiros: ";
    cin >> a >> b >> c;
}
void troca (int &x, int &y)
{
    int aux;
    aux = x;
    x = y;
    y = aux;
}
void ordena (int &a, int &b, int &c)
{
    if(a>b || a>c)
    {
        if(b<c)
            troca(a,b);
        else
            troca(a,c);
    }
    if(b>c)
        troca(b, c);
}
void imprime (int a, int b, int c)
{
    cout << "\nEm ordem : ";
    cout << a << " " << b << " " << c;
}
float calculaMedia (int a, int b, int c)
{
    float media;
    media= (a+b+c)/ 3.0;
    return media;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    entrada (a, b , c);
    ordena (a, b , c);
    imprime (a, b , c);

    cout << "\n\Média: " << calculaMedia(a,b,c) << endl;

    system("pause");
    return 0;
}








