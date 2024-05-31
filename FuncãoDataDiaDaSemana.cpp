#include <iostream>
using namespace std;
bool dv (int d, int m, int a)
{
   if (d < 32 && m < 13 && a > 0)
   {
       if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0 && m == 1 ||m == 3 ||m == 5 ||m == 7 ||m == 8 ||m == 10 ||m == 12 && d == 31 || m == 4 ||m == 6 ||m == 9 ||m == 11 && d == 30 || m == 2 && d== 29)
            return true;
       else if(a % 4 !=0 && m == 1 ||m == 3 ||m == 5 ||m == 7 ||m == 8 ||m == 10 ||m == 12 && d == 31 || m == 4 ||m == 6 ||m == 9 ||m == 11 && d == 30 || m == 2 && d == 28)
           return true;
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
int main()
{setlocale(LC_ALL, "Portuguese");

    int d, m, a, k;
    cout << "Informe o dia, mês e ano, respectivamente: ";
    cin >> d >> m >> a;
    if (dv(d,m,a) == true)
    {
     cout << ds(d, m, a,k);
    }
    else if (dv(d,m,a) == false)
        cout << "Data inválida";
        else
            cout << "erro";

        return 0;
}
