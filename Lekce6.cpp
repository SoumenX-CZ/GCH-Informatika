// Lekce 6: Smyčka while

#include <iostream> // Základní knihovna pro vstup a výstup

using namespace std; // Použití jmenného prostoru std

int main() {
    // Deklarace proměnné
    int j = 1;

    // Smyčka while
    cout << "Smycka while:" << endl;
    while (j <= 10) {
        // Vypíše čísla od 1 do 10
        cout << j << " ";
        j++;
    }
    cout << endl; // Nový řádek

    cin >> j;

    return 0; // Ukončení programu

    //TODO: Napište program, který vypíše všechna sudá čísla od 1 do 20 pomocí smyčky while.
}
