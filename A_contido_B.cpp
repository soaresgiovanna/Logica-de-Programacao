#include <iostream>
using namespace std;
void Le_vetor(int a[], int b[], int ta, int tb)
{
  cout << "informe os " << ta << " valores de A: ";
  for(int i=0; i<ta; i++)
    cin >> a[i];
   cout << "informe os " << tb << " valores de B: ";
  for(int i=0; i<tb; i++)
    cin >> b[i];
}
void ordenar(int a[], int b[], int ta, int tb)
{
   int aux;
    for(int i=0; i<ta; i++)
       for(int j=i+1; j<ta; j++)
          if(a[i] > a[j])
             {aux = a[i];
             a[i] = a[j];
             a[j] = aux;
             }
}
bool iguais(int a[], int b[], int ta, int tb)
{
  if(ta==tb)
  {ordenar(a, b, ta, tb);
  {for(int i=0; i<ta; i++)
      if(a[i]== b[i])
        {if (i == ta-1)
          return true;
        }
      else
        return false;
  }
  }
  else
    return false;
}
bool pertence(int a[], int b[], int ta, int tb)
{    int j=0;
     while(j < tb)
        {
        for(int i=0; i<ta; i++)
            {   if(b[j] == a[i])
                {
                  j++;
                    if(j==tb)
                        return true;
                }
            }
            return false;
        }
}
int main ()
{setlocale(LC_ALL, "Portuguese");
   int ta, tb;
   cout << "Informe os tamanhos de A e B, tais que A >= B: ";
   cin >> ta >> tb;
   int a[ta];
   int b[tb];

    if(ta >= tb && ta <= 10)
       {
         Le_vetor(a, b, ta, tb);
         if (!iguais(a, b, ta, tb) && pertence(a, b, ta, tb))
         {
             cout << "B está contido em A";
         }
         else
            cout << "B não está contido em A ou eles são iguais.";
       }
    else
        cout << "Informe tamanhos válidos";

    return 0;
}
