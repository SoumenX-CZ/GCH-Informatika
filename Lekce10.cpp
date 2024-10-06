// Lekce 10: Použití matematických funkcí (cmath)

#include <iostream> // Základní knihovna pro vstup a výstup
#include <cmath>    // Knihovna pro matematické funkce

using namespace std; // Použití jmenného prostoru std

int main() {
    // Deklarace proměnných
    double cislo, vysledek;

    // Výstup na obrazovku
    cout << "Zadejte cislo: ";
    // Vstup od uživatele
    cin >> cislo;

    // Použití matematických funkcí z knihovny cmath

    // Výpočet druhé odmocniny
    vysledek = sqrt(cislo);
    cout << "Druha odmocnina z " << cislo << " je " << vysledek << endl;

    // Výpočet mocniny
    vysledek = pow(cislo, 3);
    cout << cislo << " na treti je " << vysledek << endl;

    // Výpočet absolutní hodnoty
    vysledek = fabs(cislo);
    cout << "Absolutni hodnota z " << cislo << " je " << vysledek << endl;

    // Výpočet sinus
    vysledek = sin(cislo);
    cout << "Sinus z " << cislo << " je " << vysledek << endl;

    // Výpočet kosinus
    vysledek = cos(cislo);
    cout << "Kosinus z " << cislo << " je " << vysledek << endl;

    // Výpočet tangens
    vysledek = tan(cislo);
    cout << "Tangens z " << cislo << " je " << vysledek << endl;

    cin >> cislo; // Zabránění okamžitému ukončení programu

    return 0; // Ukončení programu

    //TODO: Napište program, který bude řešit kvadratickou rovnici v oboru realných čísel ve tvaru ax^2 + bx + c = 0.
}
