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
int repetido(int r[], int t)
{
    int aux;
    for(int i=0; i<t; i++)
     if(r[i] == r[i+1])
        {aux = r[i+1];
         r[i+1] = r[i+2];
         r[i+2] = aux;
        }
}
int uniao(int a[], int b[], int ta, int tb)
{
 int u[10], t=0;
  for(int i=0; i<ta; i++)
    for(int j=0; j<tb; j++)
        if(a[i] == b[j])
            u[i]=a[i];

    for(int i=0; i<t; i++)
        cout << u[i] << " ";
}
/*int interseccao(int a[], int b[], int ta, int tb)
{

}
int diferenca(int a[], int b[], int ta, int tb)
{

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
} */
int main ()
{setlocale(LC_ALL, "Portuguese");
   int ta, tb;
   cout << "Informe os tamanhos de A e B, tamanho maxímo 10: ";
   cin >> ta >> tb;
   int a[ta];
   int b[tb];

    if(ta <= 10 && tb <= 10)
       {
         Le_vetor(a, b, ta, tb);
         ordenar(a, b, ta, tb);
         repetido(a, ta);
         repetido(b, tb);
         uniao(a, b, ta, tb);
       }
    else
        cout << "Informe tamanhos válidos";

    return 0;
}
