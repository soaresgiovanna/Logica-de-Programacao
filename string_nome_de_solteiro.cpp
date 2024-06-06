#include <iostream>
#include <cstring>
using namespace std;
int main()
{setlocale(LC_ALL, "Portuguese");
    char nomeAtual[20], nomeEsposo[20], nome[40], aux[40];
    cout << "Informe o nome atual: ";
    cin.getline(nomeAtual, 20);
     cout << "Informe o nome do espeso: ";
    cin.getline(nomeEsposo, 20);
   strcpy(nome, nomeAtual);//copia
   strcat(nome, " "); //junta
   strcat(nome, nomeEsposo);

     cout << nome;

    return 0;
}
