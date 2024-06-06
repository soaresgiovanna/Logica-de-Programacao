#include <iostream>
using namespace std;
struct funcionario
{
   int cod;
   char nome[30];
   char sexo;
   float salario;
};
int main()
{setlocale(LC_ALL, "Portuguese");
    funcionario f; //variavel f do tipo funcionario
    cout << "Entrada de dados do funcionário: \n";
    cout << "Código: ";
    cin >> f.cod;

    cout << "Nome: ";
    //limpa o buffer de entrada
    fflush(stdin);
    cin.getline(f.nome,30);

    cout << "Sexo: ";
    cin >> f.sexo;

    cout << "Salário: ";
        cin >> f.salario;

    cout << "\n Dados do funcionário: " << endl;
    cout << "Código: " << f.cod << endl;
     cout << "Nome: " << f.nome << endl;
      cout << "Sexo: " << f.sexo << endl;
       cout << "Salário: " << f.salario << endl;

       return 0;
}
