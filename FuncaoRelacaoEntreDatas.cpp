#include <iostream>
using namespace std;
string comparaDatas(int d1, int m1, int a1, int d2, int m2, int a2)
{
  if(a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2))
        return "A primeira pessoa é mais nova que a segunda";
  else if(a1 == a2 && m1 == m2 && d1 == d2)
        return "Elas tem a mesma idade";
  else
        return "A primeira pessoa é mais velha que a segunda";
}

int main ()
{setlocale(LC_ALL, "Portuguese");
int d1, m1, a1, d2, m2, a2;
 cout << "Informe a primeira data, dia, mês e ano, respectivamente: ";
 cin >> d1 >> m1 >> a1;
 cout << "Informe a segunda na mesma proposta: ";
 cin >> d2 >> m2 >> a2;
cout << comparaDatas(d1, m1, a1, d2, m2, a2);
    return 0;
}
