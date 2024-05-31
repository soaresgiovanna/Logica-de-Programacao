#include <iostream>
using namespace std;
void Separa(int& i, float& d, float n)
{
    i = n;
    d = n-i;
    cout << "Parte decimal: " << i << endl;
    cout << "Parte inteira: " << d << endl;

}
int main ()
{setlocale(LC_ALL, "Portuguese");
int i;
float d, n;
cout << "Informe o número: ";
cin >> n;

Separa(i,d,n);

return 0;
}
