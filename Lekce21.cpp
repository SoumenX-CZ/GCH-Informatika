//Lekce 21 - Prevod z desitkove soustavy do dvojkove

#include <iostream>
#include <string>

using namespace std;

int main() {
    int decimal;
    cout << "Zadejte desitkove cislo: ";
    cin >> decimal;

    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }

    cout << "Dvojkove cislo: " << binary << endl;
    return 0;
}