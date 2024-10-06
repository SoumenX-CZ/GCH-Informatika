// Lekce 1: Úvod do programování, základní pojmy (proměnné, datové typy, operátory)

#include <iostream> // Základní knihovna pro vstup a výstup
using namespace std;

int main() {
    // Deklarace proměnných
    int a, b, soucet;

    // Výstup na obrazovku
    cout << "Zadejte prvni cislo: ";
    // Vstup od uživatele
    cin >> a;

    // Výstup na obrazovku
    cout << "Zadejte druhe cislo: ";
    // Vstup od uživatele
    cin >> b;

    // Výpočet součtu
    soucet = a + b;

    // Výstup výsledku na obrazovku
    cout << "Soucet " << a << " a " << b << " je " << soucet << endl;

    cin >> a;

    return 0; // Ukončení programu

    //TODO: Napište program, který vypočítá obvod a obsah obdélníku. 
    //Program by měl požádat uživatele o zadání délky a šířky obdélníku a poté vypočítat a zobrazit obvod a obsah.
}
