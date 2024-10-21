//Lekce 12 - Euklidův algoritmus
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cout << "Zadejte vetsi ze dvou cisel a: ";
    cin >> a;
    cout << "Zadejte b: ";
    cin >> b;
    int c;

    while (true) {
        c = a % b;
        a = b;
        b = c;
        cout << "a: " << a << " b: " << b << " c: " << c << endl;
    }
    cout << "----------------------------------------" << endl;
    cout << "Nejvetsi spolecny delitel je: " << a << endl;
    return 0;
}