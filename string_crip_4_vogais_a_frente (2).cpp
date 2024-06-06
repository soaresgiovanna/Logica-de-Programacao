#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char alfabeto[27], palavra[20], palavra2[20];
    int t=0, i=0;
    for(char ch='a'; ch <= 'z'; ch++)
    {
        alfabeto[i] = ch;
        i++;
    }

    cout << "Informe a palavra a ser criptografada, letras em minúsculo: ";
    cin.getline(palavra,19);

    for (int i=0; i<strlen(palavra); i++)
        {

                 if(palavra[i] == 'w')
                {
                    palavra[i]= 'a';
                }
                else if(palavra[i] == 'x')
                {
                    palavra[i]= 'b';
                }
                 else if(palavra[i] == 'y')
                {
                    palavra[i]= 'c';

                }
                else if(palavra[i] == 'z')
                {
                    palavra[i]= 'd';
                }
                else
                {
                    palavra[i]= palavra[i]+4;

                }
           }
                cout << palavra;
    return 0;
}
