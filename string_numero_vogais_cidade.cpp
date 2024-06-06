#include <iostream>
#include <cstring>
using namespace std;
int main()
{setlocale(LC_ALL, "Portuguese");
    char cidadeAtual[15], cidadeNasceu[15];
    int vogais=0;
    cout << "Informe a cidade atual: ";
    cin.getline(cidadeAtual, 15);
     cout << "Informe a cidade que nasceu: ";
    cin.getline(cidadeNasceu, 15);

    if(cidadeAtual == cidadeNasceu)
        cout << "Você mora na cidade que nasceu" << endl;
    else
        cout << "Você não mora na cidade que nasceu" << endl;

    for(int i=0; i<15; i++)
    {
        if(cidadeAtual[i]== 'A' || cidadeAtual[i]== 'a'|| cidadeAtual[i]== 'E'|| cidadeAtual[i]== 'e'|| cidadeAtual[i]== 'I'|| cidadeAtual[i]== 'i'|| cidadeAtual[i]== 'O'|| cidadeAtual[i]== 'o' || cidadeAtual[i]== 'U'|| cidadeAtual[i]== 'u')
            {cidadeAtual[i]= '*';
              vogais++;
            }
    }
     cout << cidadeAtual << endl;
     cout << "Número de vogais de/a " << cidadeAtual << " é: " << vogais;

    return 0;
}
