#include <iostream>
using namespace std;
void maior_menor (int& maior, int& menor)
{
    int n;
    cout << "informe os 10 valores: ";
    for(int i=0; i<10; i++)
    {
        cin >> n;
        if(i==0)
        {
            maior= n;
            menor= n;
        }
        else if (n > maior)
            maior = n;
        else if (n < menor)
            menor = n;
    }
}
int main ()
{setlocale(LC_ALL, "Portuguese");
    int ma, me;
    maior_menor(ma,me);
    cout << "O maior e o menor é, respectivamente: " << ma << " " << me << endl;

    return 0;
}
