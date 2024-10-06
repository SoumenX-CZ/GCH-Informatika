// Lekce 4: Podmíněné příkazy (if, else)

#include <iostream> // Základní knihovna pro vstup a výstup

using namespace std; // Použití jmenného prostoru std

int main() {
    // Deklarace proměnných
    int cislo;

    // Výstup na obrazovku
    cout << "Zadejte cele cislo: ";
    // Vstup od uživatele
    cin >> cislo;

    // Podmíněný příkaz if-else
    if (cislo % 2 == 0) {
        // Pokud je číslo sudé
        cout << "Cislo " << cislo << " je sude." << endl;
    } else {
        // Pokud je číslo liché
        cout << "Cislo " << cislo << " je liche." << endl;
    }

    cin >> cislo;
    return 0; // Ukončení programu

    //TODO: Napište program, který zjistí, zda je zadané číslo kladné, záporné nebo nula. 
    //Program by měl požádat uživatele o zadání čísla a poté zobrazit odpovídající zprávu.
}
