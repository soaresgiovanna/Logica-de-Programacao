#include <iostream>
using namespace std;
int maior(int x, int y)
{
    if (x > y)
   return x;
    else
    return y;
}
int main()
{setlocale(LC_ALL, "Portuguese");
 int x, y;
cout << "Informe os dois valores: ";
cin >> x >> y;
cout << "O maior é: " << maior(x,y) << endl;

return 0;
}
