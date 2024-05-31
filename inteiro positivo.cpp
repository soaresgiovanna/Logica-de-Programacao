#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
 int x;
 cout << "Informe o número: ";
 cin >> x;
 if(x > 0)
    cout << "Positivo";
 else
    cout << "Não é positivo";
 return 0;
}
