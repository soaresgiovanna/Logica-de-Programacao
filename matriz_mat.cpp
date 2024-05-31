#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float mat [6] [3];
    int i;
    cout << "Entre com os valores 6 linhas e 3 colunas: ";
    for(int i=0; i<6; i++)
        for (int j=0; j<3; j++)
            cin >> mat[i] [j];

    for(int i=0; i<6; i++)
    {
        for (int j=0; j<3; j++)
            cout << mat[i] [j];

        cout << endl;
    }

    return 0;
}
