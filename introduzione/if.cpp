#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout<< "Digita un numero"<<endl;

    cin >> numero;

    if (numero == 0)
    {
        cout << "Hai digitato 0" << endl;
    }
    else
    {
        cout << "Non hai digitato 0" << endl;
    }
}