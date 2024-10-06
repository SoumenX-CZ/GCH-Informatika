// Lekce 7: Smyčka for

#include <iostream> // Základní knihovna pro vstup a výstup

using namespace std; // Použití jmenného prostoru std

int main() {
    // Smyčka for
    cout << "Smycka for:" << endl;
    for (int i = 1; i <= 10; i++) {
        // Vypíše čísla od 1 do 10
        cout << i << " ";
    }
    cout << endl; // Nový řádek

    int a;
    cin >> a;
    return 0; // Ukončení programu

    //TODO: Napište program, který vypíše prvních 10 čísel Fibonacciho posloupnosti pomocí smyčky for.
}
