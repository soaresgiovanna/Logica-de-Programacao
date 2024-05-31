#include<iostream>
using namespace std;

int main ()
{
   float valor_fare, valor_f32, valor_divi, valor_cel;
    cout << "Informe a temperatura em Fahrenheit" ;
    cin >> valor_fare;

    valor_f32 = valor_fare - 32;

    valor_divi = valor_f32 / 1.8;

     cout << "Valor em celsius: " << valor_divi << endl;
}
