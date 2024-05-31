#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    int d, m, a;
    cout << "Informe o dia, mês e ano, respectivamente: ";
    cin >> d >> m >> a;
   if (d < 32 && m < 13 && a > 0)
   {
       if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0 && m == 1 ||m == 3 ||m == 5 ||m == 7 ||m == 8 ||m == 10 ||m == 12 && d == 31 || m == 4 ||m == 6 ||m == 9 ||m == 11 && d == 30 || m == 2 && d== 29)
            cout << "Data válida";
       else if(a % 4 !=0 && m == 1 ||m == 3 ||m == 5 ||m == 7 ||m == 8 ||m == 10 ||m == 12 && d == 31 || m == 4 ||m == 6 ||m == 9 ||m == 11 && d == 30 || m == 2 && d == 28)
            cout << "Data válida";
    }
    else
    cout << "Data inválida";

    return 0;
}
