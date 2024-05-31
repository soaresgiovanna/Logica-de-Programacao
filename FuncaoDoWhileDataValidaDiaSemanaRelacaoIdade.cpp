#include <iostream>
using namespace std;

bool dv(int d, int m, int a)
{
    if (d < 32 && d > 0 && m < 13 && m > 0 && a > 0)
    {
        if((a % 4 == 0 && a % 100 != 0 || a % 400 == 0) && (((m == 1 ||m == 3 ||m == 5 ||m == 7 ||m == 8 ||m == 10 ||m == 12) && d <=31) || ((m == 4 ||m == 6 ||m == 9 ||m == 11)&& d <= 30 || m == 2 && d <= 29)))
            return true;
        else if(!(a % 4 == 0 && a % 100 != 0 || a % 400 == 0) && (((m == 1 ||m == 3 ||m == 5 ||m == 7 ||m == 8 ||m == 10 ||m == 12) && d <=31) || ((m == 4 ||m == 6 ||m == 9 ||m == 11)&& d <= 30 || m == 2 && d <= 28)))
            return true;
        else
            return false;
    }
    else
        return false;
}
string ds(int d, int m, int a, int k)
{
    if(m == 1)
    {
        m = 13;
        a = a - 1;
    }
    if(m == 2)
    {
        m = 14;
        a = a-1;
    }
    k = d + (2 * m) + ((3 * (m + 1)) / 5) + a + (a / 4) - (a / 100) + (a / 400) + 2;
    if(k % 7 == 0)
        return "Sabado";
    else if(k % 7 == 1)
        return  "Domingo";
    else if(k % 7 == 2)
        return  "Segunda";
    else if(k % 7 == 3)
        return "Terca";
    else if(k % 7 == 4)
        return "Quarta";
    else if(k % 7 == 5)
        return "Quinta";
    else if(k % 7 == 6)
        return "Sexta";
}
string comparaDatas(int d1, int m1, int a1, int d2, int m2, int a2)
{
    if(a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2))
        return "A primeira pessoa é mais nova que a segunda";
    else if(a1 == a2 && m1 == m2 && d1 == d2)
        return "Elas tem a mesma idade";
    else
        return "A primeira pessoa é mais velha que a segunda";
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int d1, d2, m1, m2, a1, a2, k;
    do
    {
        cout <<"informe as duas datas válidas, dia, mês e ano, rspectivamente: ";
        cin >> d1 >> m1 >> a1 >> d2 >> m2 >> a2;

    }
    while(dv(d1,m1,a1) == false || dv(d2,m2,a2) == false);

    cout << "Dia da semana da primeira data: " << ds(d1, m1, a1, k) << endl;
    cout << "Dia da semana da segunda data: " << ds(d2, m2, a2, k) << endl;
    cout << comparaDatas(d1, m1, a1, d2, m2, a2) << endl;

    return 0;
}
