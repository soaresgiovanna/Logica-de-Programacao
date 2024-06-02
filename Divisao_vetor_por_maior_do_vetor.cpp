#include <iostream>
using namespace std;
void Le_vetor(float n[10])
{
  cout << "informe os 10 valores: ";
  for(int i=0; i<10; i++)
    cin >> n[i];
     for(int i=0; i<10; i++)
         cout << n[i] << " ";
}
float maior(float n[10])
{
   float m=n[0];
   for(int i=0; i<10; i++)
   {
       if(n[i]>m)
        m=n[i];
   }
    return m;
}
float resultante(float v[10])
{
    float m = maior(v);
     for(int i=0; i<10; i++)
        v[i]= v[i]/m;
     for(int i=0; i<10; i++)
      cout << v[i] << " ";
}
int main ()
{setlocale(LC_ALL, "Portuguese");
 float v[10];
 Le_vetor(v);
 cout << endl;
 cout << "maior: " << maior(v) << endl;
 resultante(v);
    return 0;
}
