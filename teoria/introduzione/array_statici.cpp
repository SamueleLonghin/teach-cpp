#include <iostream>

using namespace std;

int main()
{
    // Creo un Array di interi assegnando i valori 1 2 3 4 alla  variabile listaDiNumeri
    int listaDiNumeri[] = {1, 2, 3, 4};

    // Creo un Array di interi lungo 6 elementi. Al momento non so cosa c'è dentro ad ogni posizione
    int altraListaDiNumeri[6];

    // Ottengo il terzo valore del primo array e lo stampo a schermo
    cout << listaDiNumeri[2] << endl;

    /** 
     * Assegno il valore 88 al secondo elemento del mio array di 6 elementi.
     * Al momento, per quello che ne so l'array è il seguente: {?, 88, ?, ?, ?, ?} 
     * dove ? sta a far intendere che non so cosa ci sia dentro
     */
    altraListaDiNumeri[1] = 88;


    // Ottengo e stampo il secondo elemento dell'array da 6 elementi
    cout << altraListaDiNumeri[1] << endl;

    return 0;
}