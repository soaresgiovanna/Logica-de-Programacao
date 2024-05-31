#include<iostream>
using namespace std;


int main()
{
    int angulo, angulo_aux, quadrante;

    cin >> angulo;

    angulo_aux = angulo%90;

    if(angulo_aux == 0)
        cout << "Não estah em nenhum quadrante";
    else
    {
        angulo_aux = angulo % 360;
        if(angulo<0)
            angulo_aux = 360+angulo;

        if(angulo_aux > 0 && angulo_aux < 90)
            cout << "quadrante 1";
        else if(angulo_aux > 90 && angulo_aux < 180)
            cout << "quadrante 2";

        else if(angulo_aux > 180 && angulo_aux < 270)
            cout << "quadrante 3";
        else
            cout << "quadrante 4";

    }



 return 0;
}
