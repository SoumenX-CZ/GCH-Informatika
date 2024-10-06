// Lekce 5: Podmíněné příkazy (switch)

#include <iostream> // Základní knihovna pro vstup a výstup

using namespace std; // Použití jmenného prostoru std

int main() {
    // Deklarace proměnných
    int cislo;

    // Výstup na obrazovku
    cout << "Zadejte cele cislo: ";
    // Vstup od uživatele
    cin >> cislo;

    // Podmíněný příkaz switch
    switch (cislo) {
        case 0:
            cout << "Cislo je nula." << endl;
            break;
        case 1:
            cout << "Cislo je jedna." << endl;
            break;
        case 2:
            cout << "Cislo je dve." << endl;
            break;
        default:
            cout << "Cislo je vetsi nez dve nebo zaporne." << endl;
            break;
    }
    cin >> cislo;
    return 0; // Ukončení programu

    //TODO: Napište program, který požádá uživatele o zadání dne v týdnu (číslo od 1 do 7) 
    //a poté zobrazí název dne (např. 1 = Pondělí, 2 = Úterý, atd.) pomocí příkazu switch.
}
