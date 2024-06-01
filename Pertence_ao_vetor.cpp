#include <iostream>
using namespace std;
void Le_vetor(int v[20])
{
    for(int i=0; i<20; i++)
        v[i] = i;
}
bool pertence(int v[20], int x)
{
    for(int i=0; i<20; i++)
      {
          if(v[i] == x)
            return true;
      }
      return false;
}
int main ()
{setlocale(LC_ALL, "Portuguese");
int v[20], x;
cout << " Um valor: ";
cin >> x;
 Le_vetor(v);
 if(pertence(v, x))
    cout << "true";
 else
    cout << "false";

 return 0;
}
