#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,q=0, qm=0, qh=0, mt=0, mm=0, mh=0;
    char s;
    cout << "Informe a idade e o sexo, respectivamente e 0 e s para concluir: ";
    do
    {cin >> i >> s;
        if((i > 0 && (s == 'f' || s == 'm' )) || (i == 0 && s == 's'))
        {
            if(i != 0)
                q++;
            mt = mt + i;
            if (s == 'f')
            {
                mm = mm + i;
                qm++;
            }
            else if(s == 'm')
            {
                mh = mh + i;
                qh++;
            }
        }
        else
           cout << "Entrada inválida " << endl;
        if (i == 0 && s == 's' && qm == 0)
          cout << "Média de pessoas do sexo masculino: " << mh/qh << endl << "Não houve entrada de pessoas do sexo feminino" << endl;
        else if (i == 0 && s == 's' && qh == 0)
           cout << "Média de pessoas do sexo feminino: " << mm/qm << endl << "Não houve entrada de pessoas do sexo masculino" << endl;
        else if(i == 0 && s == 's')
            cout << "Média de todos: " << mt/q << endl << "Média de pessoas do sexo feminino: " << mm/qm << endl << "Média de pessoas do sexo masculino: " << mh/qh << endl;
        }while(i != 0);

        return 0;
}
