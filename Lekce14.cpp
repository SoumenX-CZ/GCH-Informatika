//Lekce 14 - Cyklus for
#include <iostream>

using namespace std;

int main() {
    int a;
    unsigned int vysledek = 1;
    cout << "Zadejte cislo: ";
    cin >> a;
    for(int i=1; i<=a; i++){
        vysledek = vysledek * i;

    }
    cout << "Vysledek: " << vysledek << endl;
}