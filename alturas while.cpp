#include <iostream>
#include <cmath>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    float a, ama=INT_MIN, ame=INT_MAX, med=0, q=0;
    cout << "Informe 5 alturas: ";
  while(q < 5)
  {
   cin >> a;
   q++;
   med = med + a;
   if(a > ama)
    ama = a;
   if (a < ame)
    ame = a;
  }
  med = med / 5;
  cout << "Média: " << med << endl << "Menor: " << ame << endl << "Maior: " << ama << endl;
    return 0;
}
