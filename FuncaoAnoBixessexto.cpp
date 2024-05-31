#include <iostream>
using namespace std;
bool bi(int a)
{
    if(a%4==0 && a%100 != 0 || a%400==0)
        return true;
    else
        return false;
}
int main()
{setlocale(LC_ALL, "Portuguese");
  int a;
    cout << "Informe o ano: ";
    cin >> a;

    if(bi(a)== true)
        cout << "É bissexto! ";
    else
        cout << "Não é bissexto! ";
    return 0;
}
