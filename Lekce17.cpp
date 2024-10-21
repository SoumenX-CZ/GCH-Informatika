//Lekce 17 - Výpočet stěnových úhlopříček kvádru pomocí volané funkce
#include <iostream>
#include <cmath>

using namespace std;

double u(double x, double y) {
    return(sqrt(x*x + y*y));

}


int main() {
    double a, b, c;
    cout << "Zadejte stranu a: ";
    cin >> a;
    cout << "Zadejte stranu b: ";
    cin >> b;
    cout << "Zadejte stranu c: ";
    cin >> c;
    cout << "1. stenova uhlopricka: " << u(a,b) << endl;
    cout << "2. stenova uhlopricka: " << u(a,c) << endl;
    cout << "3. stenova uhlopricka: " << u(b,c) << endl;
}