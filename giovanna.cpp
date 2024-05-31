#include<iostream>
using namespace std;

int main()
{
    float valor_prod, valor_aum, valor_final;

    cout << "Entre com o valor do produto";
    cin >> valor_prod;

    valor_aum = 0.1 * valor_prod;

    valor_final = valor_prod + valor_aum;

    cout << "Valor do aumento: R$" << valor_aum << endl;
    cout << "Valor reajustado: R$" << valor_final;

    return 0;

}
