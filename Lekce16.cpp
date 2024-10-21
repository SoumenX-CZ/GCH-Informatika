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

    for (i; i<=abs(n); i++) {
        pomocna *=a;
    } 
    
    if (n >= 0) {
        cout << pomocna << endl;
    }
    else 
        cout << 1/pomocna << endl;


}