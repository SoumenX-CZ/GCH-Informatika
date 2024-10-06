// Lekce 2: Instalace a nastavení vývojového prostředí (IDE)
// Tento program demonstruje základní strukturu programu v C++ a výstup "Hello, World!"

#include <iostream> // Základní knihovna pro vstup a výstup

using namespace std; // Použití jmenného prostoru std

int main() {
    // Funkce main() je vstupním bodem programu

    // cout je objekt pro výstup na obrazovku
    // << je operátor pro vložení dat do výstupního proudu
    // "Hello, World!" je řetězec, který chceme vypsat
    // endl vloží nový řádek (ekvivalent '\n')
    cout << "Hello, World!" << endl;

    int a;
    cin >> a;

    // return 0; ukončí program a vrátí hodnotu 0
    // Hodnota 0 obvykle znamená, že program skončil úspěšně
    return 0;
}
