//Lekce 19 - Hanojská věž

#include <iostream>

using namespace std;

void vez(int a, char z, char pom, char na) {
    if (a==1)
    {
        cout << "presun disk 1 z " << z << " na " << na << endl;
    }

    else {
        vez(a-1, z, na, pom);
        cout << "presun disk " << a << " z " << z << " na " << na << endl;
        vez(a-1, pom, z, na);  
    }
    

}


int main() {
    int pocet;
    cout << "Zadejte pocet kotoucu: ";
    cin >> pocet;
    cout << endl;
    vez(pocet, 'A', 'B', 'C');
}