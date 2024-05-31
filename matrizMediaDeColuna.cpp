#include <iostream>
using namespace std;
int main()
{setlocale(LC_ALL, "Portuguese");
    float m[9][4], sb=0;
    cout << "Informe as notas de matéria por matéria: ";
    for(int i=0; i<9; i++)
        for(int j=0; j<4; j++)
        {
         sb = sb+ m[i][j];
        if(i==9)
            m[i][j]= sb/8.0;
        else
            cin >> m[i][j];

        sb=0;
        }
  for(int i=0; i<9; i++)
      {
        for(int j=0; j<4; j++)
            cout << m[i][j];

        cout << endl;
      }
    return 0;
}
