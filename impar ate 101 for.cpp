#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
int n,q;
    for(q = 1; q < 102; q++)
    {
        if(q % 2 != 0)
            cout << " " << q << " ";
    }
    return 0;
}
