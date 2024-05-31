#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");

    int A, B, C, D, E, F, G, H, I, d1, d2, s, r;
    cout << "Informe os o primeiros 9 dígitos do seu cpf, comece pelo primeiro";
    cin >> A;
    cout << "Agora o segundo: ";
    cin >> B;
    cout << "Terceiro: ";
    cin >> C;
    cout << "Quarto:";
    cin >> D;
    cout << "Quinto: ";
    cin >> E;
    cout << "Sexto: ";
    cin >> F;
    cout << "Sétimo: ";
    cin >> G;
    cout << "Oitavo: ";
    cin >> H;
    cout << "Nono: ";
    cin >> I;

  r = ((A * 10) + (B * 9) + (C * 8) + (D * 7) + (E * 6) + (F * 5) + (G * 4) + (H * 3) + (I * 2)) % 11;
  if(r == 0 || r == 1)
    d1 = 0;
  else
    d1 = 11 - r;

     s = ((B * 10) + (C * 9) + (D * 8) + (E * 7) + (F * 6) + (G * 5) + (H * 4) + (I * 3) + (d1 * 2)) % 11;
  if(r == 0 || r == 1)
    d2 = 0;
  else
    d2 = 11 - s;

  cout << d1 << endl;
  cout << d2 << endl;

}
