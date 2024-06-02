#include <iostream>
using namespace std;
void Le_vetor(int n[10])
{
  cout << "Informe os 10 valores: ";
  for(int i=0; i<10; i++)
   cin >> n[i];
}
bool pertence(int n[10], int a, int b)
{
    for(int i=0; i<10; i++)
        {if(n[i] > a && n[i] < b)
            {
                if(i==9)
                return true;
            }
        else
            return false;

        }

}
int main ()
{setlocale(LC_ALL, "Portuguese");
 int v[10], a, b;
 Le_vetor(v);
 cout << "Informe as extremidades do intervalo: ";
 cin >> a >> b;
 if(pertence(v, a, b))
    cout << "Pertence ao intervalo";
 else
   cout << "Não pertence ao intervalo";

    return 0;
}
