#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
 float r, b, a, s;
 cout << "Informe o salário: ";
 cin >> s;
 if(s <= 900 && s > 0)
 {
    a = 350;
    b =  s * 0.15;
    r = a + b + s;
    cout << "Rendimento total: " << r << endl;
    cout << "Bonificação: " << b << "(15%)" << endl;
    cout << "Auxílio escola: " << a << endl;
 }
  else if (s > 900 && s <= 3000)
  {
    a = 100;
    b = s * 0.05;
    r = a + b + s;
    cout << "Rendimento total: " << r << endl;
    cout << "Bonificação: " << b << " (5%)" << endl;
    cout << "Auxílio escola: " << a << endl;
  }
  else if(s > 3000)
  {
    a = 100;
    b = 0;
    r = a + s;
    cout << "Rendimento total: " << r << endl;
    cout << "Bonificação: " << b << " (0%)" << endl;
    cout << "Auxílio escola: " << a << endl;
  }
        else
            cout << "Salário inválido";
  return 0;
}
