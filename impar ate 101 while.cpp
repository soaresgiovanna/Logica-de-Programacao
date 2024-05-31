#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
int n,q=0;
    while(q < 102)
    {
        q++;
        if(q % 2 != 0)
            cout << " " << q << " ";
    }
    return 0;
}
