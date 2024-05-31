#include <iostream>
using namespace std;
int maior(int x, int y)
{
    if (x < y)
    {
        x = y;
    }
    return x;
}
int maior4(int x, int y, int z, int w)
{
    x= maior(x, y);
    x= maior(x, z);
    x= maior(x, w);
    return x;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, z, w;
    cout << "Informe os quatro valores: ";
    cin >> x >> y >> z >> w;
    cout << "O maior é: " << maior4(x, y, z, w) << endl;

    return 0;
}
