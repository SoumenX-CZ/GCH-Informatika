// Lekce 3: První program v C++ (Hello World)

#include <iostream> // Základní knihovna pro vstup a výstup
#include <string>   // Knihovna pro práci s řetězci

using namespace std; // Použití jmenného prostoru std

int main() {
    // První část: Výpis "Hello, World!"
    cout << "Hello, World!" << endl;

    // Druhá část: Výpis jména uživatele
    // Deklarace proměnné pro uchování jména uživatele
    string jmeno;

    // Výstup na obrazovku
    cout << "Zadejte své jméno: ";
    // Vstup od uživatele
    cin >> jmeno;

    // Výstup výsledku na obrazovku
    cout << "Hello, " << jmeno << "!" << endl;
    cin >> jmeno;
    return 0; // Ukončení programu
}
