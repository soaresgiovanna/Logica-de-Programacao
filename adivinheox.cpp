#include <iostream>
# include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
 int q, n, x;
 srand(time(NULL)); //cria um número aleatório com base no tempo
 x = rand()%30+1; // cria um número aleatório entre 1 e 30
do {
    cout << "Adivinhe o valor de x: ";
    cin >> n;
    q++;
    if(n < x)
     cout << "Número menor que x "<< endl;
    else if(n > x)
      cout << "Número maior que x " << endl;
    else if(n == x)
     cout << "Acertou!!" << endl << "Número de tentativas: " << q << endl;
 }while(n != x);

    return 0;
}
