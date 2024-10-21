//Lekce 11 - Součet cifer

#include <iostream>

using namespace std; // Použití jmenného prostoru std

int main() {
    int a;
    int zbytek;
    int vysledek;
    cout << "Zadejte cislo: ";
    cin >> a;

    while (a != 0)
    {
        zbytek = a % 10;
        a = a /10;
        cout << zbytek << endl;
        vysledek = vysledek + zbytek;

    }
    cout << "Soucet cifer je: " << vysledek << endl;
    
    return 0; // Ukončení programu;

    //TODO: Napiš program na hledání Pythagoristicé trojice s cyklem while a náhodnými čísly od 1 do 100.
}