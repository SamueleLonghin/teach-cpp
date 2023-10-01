#include <iostream>

using namespace std;

int main()
{
    int N = 6;

    int ListaDiNumeri[] = {1, 2, 3, 4};

    int *ListaDiTantiNumeri = new int[N];

    cout << ListaDiNumeri[2] << endl;

    ListaDiTantiNumeri[1] = 10;

    cout << ListaDiTantiNumeri[1] << endl;
    return 0;
}