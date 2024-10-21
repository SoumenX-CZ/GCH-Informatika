//Lekce 15 - Hra o hádání čísel ze součtu a ze součinu
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    znova:
    int a,b;
    int soucet, soucin;
    int prvniOdhad, druhyOdhad;
    int pocetPokusu = 0;
    srand(time(0));
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;

    soucet = a + b;
    soucin = a * b;
    cout << "Soucet: " << soucet << endl;
    cout << "Soucin: " << soucin << endl;
    cout << "Hadej" << endl;
    skok:
    if (pocetPokusu < 6) {
        cout << "Prvni neznama: ";
        cin >> prvniOdhad;
        cout << "Druha neznama: ";
        cin >> druhyOdhad;
        if (prvniOdhad == a && druhyOdhad == b || prvniOdhad == b && druhyOdhad == a) {
            cout << "Odpoved je spravna" << endl;
            goto znova;
        } else {
            cout << "Odpoved je spatna" << endl;
            pocetPokusu++;
            goto skok;
        }
        return 0;
    }
    else {
        goto znova;
    }
}