#include <iostream>

using namespace std;

int main()
{
    // Creo un array di 4 elementi
    int arr[] = {1, 2, 3, 4};

    cout << "Ecco i bei numeri:" << endl;
    // Eseguo l'operazione all'interno del corpo per 4 volte assegnando ad i valori da 0 a 3 incrementandola ad ogni iterazione
    for (int i = 0; i < 4; i++)
    {
        // Stampo l'elemento in posizione i dell'array arr
        cout << arr[i] << endl;
    }
    cout << endl;
}