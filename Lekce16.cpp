//Lekce 16 - Výpočet mocniny pomocí cyklu for
#include <iostream>

using namespace std;

int main() {
    double a, pomocna=1;
    int n,i;
    cout << "Zadejte zaklad: ";
    cin >> a ;
    cout << "Zadejte exponent: ";
    cin >> n;

    for (i; i<=n; i++) {
        pomocna *=a;

    } 
    cout << pomocna;


}