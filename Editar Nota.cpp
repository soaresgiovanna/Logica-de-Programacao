#include <iostream>;
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
 int N, N1, N2, N3, N4, N5;
 cout << "Informe as 5 notas: ";
 cin >> N1 >> N2 >> N3 >> N4 >> N5;
 if (N1 >= 0 && N1 <= 20 && N2 >= 0 && N2 <= 20 && N3 >= 0 && N3 <= 20 && N4 >= 0 && N4 <= 20 && N5 >= 0 && N5 <= 20);
    cout << "Entrada inváida! Alguma(s)nota(s)não está(ão) no intervalo de 0 a20!" ;
 else
  N = N1 + N2 + N3 + N4 + N5;
 if(N < 30)
        cout << "Reprovado(A)" << endl;
    else if (N < 70)
            cout << "Exame" << endl;
         else if(N > 69)
                cout << "Aprovado(A)" << endl;


return 0;
}
