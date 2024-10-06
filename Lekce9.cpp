// Lekce 9: Příkaz goto

#include <iostream> // Základní knihovna pro vstup a výstup

using namespace std; // Použití jmenného prostoru std

int main() {
    // Deklarace proměnné
    int l = 1;

    // Příkaz goto
    cout << "Prikaz goto:" << endl;
    start:
    // Vypíše čísla od 1 do 10
    cout << l << " ";
    l++;
    if (l <= 10) {
        goto start; // Skok na štítek start
    }
    cout << endl; // Nový řádek

    cin >> l;
    return 0; // Ukončení programu

    //TODO: Napište program, který bude počítat součet čísel od 1 do 10 pomocí příkazu goto.
}
