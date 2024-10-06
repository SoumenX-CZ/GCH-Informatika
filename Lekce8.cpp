// Lekce 8: Smyčka do-while

#include <iostream> // Základní knihovna pro vstup a výstup

using namespace std; // Použití jmenného prostoru std

int main() {
    // Deklarace proměnné
    int k = 1;

    // Smyčka do-while
    cout << "Smycka do-while:" << endl;
    do {
        // Vypíše čísla od 1 do 10
        cout << k << " ";
        k++;
    } while (k <= 10);
    cout << endl; // Nový řádek

    cin >> k;
    return 0; // Ukončení programu

    //TODO: Napište program, který bude opakovaně žádat uživatele o zadání čísla, 
    //dokud nezadá číslo větší než 100, pomocí smyčky do-while.
}
